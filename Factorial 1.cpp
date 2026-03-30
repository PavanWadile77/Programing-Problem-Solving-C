#include <stdio.h>  
long long factorial(int n) {
	long long fact = 1;
	
	if (n < 0) {
	    return -1;
	}
	
	for (int i=1; i<=n; i++) {
	      fact *= i;
	}
	return fact;
}

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	long long result = factorial(num);
	
	
	if (result == -1) {
		printf("Factorial is not defined for negative number.\n");
	} else {	
		printf("Factorial of %d is %11d\n",num, result);
	}	
	return 0;
}
 
