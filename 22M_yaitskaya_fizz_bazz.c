#include <stdio.h>
#include <stdlib.h>

int fizz_buzz(int start, int inc, int end);

int main(int argc, char ** argv){
	int start;
	int inc;
	int end;
	printf("Enter start value\n");
	scanf("%d", &start);
	if (start < 0) {
		printf("Invalid value\t Default start value is assigned start = 1\n");
		start = 1;
	}
	printf("Enter increment value\n");
	scanf("%d", &inc);
	if (inc < 0) {
		printf("Invalid value\t Default increment value is assigned increment = 1\n");
		inc = 1;
	}
	printf("Enter maximum value\n");
	scanf("%d", &end);
	if (start > end){
		printf("Invalid value\t Start is geater then end\nTry again\n");
		return 1;
	}
	if (end < 0) {
		printf("Invalid value\t Default end value is assigned end = 50\n");
		end = 50;
	}
	fizz_buzz(start, inc, end);
	return 0;
}

int fizz_buzz(int start, int inc, int end){
	int d;
	printf("The game starts now:\n");
	for (int i = start; i <= end; i+=inc){
		if (i%3 == 0){
			printf("fizz");
			if (i%5 == 0){
				printf(" buzz\n");
			}
			else printf("\n");
		}
		else if (i%5 == 0){
			printf("buzz\n");
		}
		else printf("%d\n", i);
	}
	printf("End of the game\n");
}