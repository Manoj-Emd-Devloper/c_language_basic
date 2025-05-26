#include <stdio.h>

int main()
{

	int var;
    printf("Enter the number of var =");
    scanf("%d",&var);
	
	if (var < 10) {
		printf("%d is less than 10", var);
	}

	if (var > 20) {
		printf("%d is greater than 20", var);
	}

	return 0;
}
