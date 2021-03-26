#include "stdio.h"

int fizzbuzz(int a, int b) {
	
	if ((a < 0) || (b < 0))
		printf(" cannot be done!\n");
	else {
		printf(": \n");
		for (int i = a; i < (a + b); i++) {
				
			if 	(!(i % 15) && i)
				printf("Fizz Buzz");
			else if (!(i % 3) && i)
				printf("Fizz");
			else if (!(i % 5) && i)
				printf("Buzz");
			else
				printf("%d", i);
				
			if (i == (a + b - 1))
				printf(".\n");
			else
				printf(", ");
				
		}
	}
	return 0;
}

int main(int argc, char* argv[]) {
	
	int a, b = 0;
	
	printf("\nEnter values 'a b', where:\n");
	printf("a - first number in sequence;\n");
	printf("b - string size:\n\n");
	
	scanf("%d%d", &a, &b);
	
	printf("\nYour sequence");
	
	fizzbuzz(a, b);
	
	return 0;
}
