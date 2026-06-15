#include <stdio.h>

int main(){
	int numOfClasses;
	printf("enter your number of classes: ");
	scanf("%d", &numOfClasses);

	printf("\nenter grades in format: xx.xx type\nenter class type in format: \nregular - r\nhonors - h\nap - a\ncollage course - c\n\n");

	float gradeUnweighted;
	float gradeWeighted;

	for(int i = 0; i < numOfClasses; i++){
		float grade;
		char type;		
		
		printf("enter grade %d & type: ", i + 1);
		scanf(" %f %c", &grade, &type);
		getchar();

		grade = ((grade/20)-1);

		gradeUnweighted += grade;

		switch (type){
			case 'r':
				gradeWeighted += grade;
				break;
			case 'h':
				gradeWeighted += grade + 0.5;
				break;
			case 'a':
				gradeWeighted += grade + 1;
				break;
			case 'c':
				gradeWeighted += grade + 0.5;
				break;
		}
	}

	gradeUnweighted = gradeUnweighted / numOfClasses;
	gradeWeighted = gradeWeighted / numOfClasses;

	printf("\nunweighted gpa: %f\tweighted gpa: %f\n", gradeUnweighted, gradeWeighted);

	return 0;
}
