NAME := grade-calc

all:
	gcc grade-calc.c -o ./bin/grade-calc

clean:
	rm -f ./bin/grade-calc
