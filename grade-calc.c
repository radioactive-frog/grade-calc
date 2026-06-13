#include <stdio.h>

int main(){
	int numOfClasses;
	printf("enter your number of classes: ");
	scanf("%d", &numOfClasses);

	printf("\nenter grades in format: xx.xxtype\nenter clas type in format: \nregular - r\nhonors - h\nap - a\ncollage course - c\n\n");

	float gradeUnweighted;
	float gradeWeighted;

	for(int i = 0; i < numOfClasses; i++){
		//fflush(stdin);
		
		//printf("enter grade %d: ", i + 1);
		//float grade = scanf("%f", &grade);

		//gradeUnweighted += ((grade/20)-1);
		
		////fflush(stdin);
		//printf("enter type %d: ", i + 1);
		////fflush(stdin);
		//char type = scanf("%c", &type);
		//printf("\n");
		////fflush(stdin);
		
		//printf("\n");
		fflush(stdin);
		printf("enter grade %d & type: ", i + 1);
		float grade;
		char type;
		fflush(stdin);
		scanf("%f%d ", &grade, &type);
		//printf("\n");
		fflush(stdin);

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

	gradeUnweighted /= numOfClasses;
	gradeWeighted /= numOfClasses;

	printf("\nunweighted gpa: %f", gradeUnweighted);
	printf("\nweighted gpa: %f\n", gradeWeighted);

	return 0;
}
