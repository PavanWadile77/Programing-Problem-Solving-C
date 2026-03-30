#include <stdio.h>
int sumOfDigits(int n)
{
	if (n == 0)
	    return 0;
	else
	    return (n % 10) + sumOfDigits(n / 10);
}
int main ()
{
	    int num;
	printf("Enter a numner: ");
	scanf("%d", &num);
	if (num < 0) {
	    num = -num;
	}
	int result = sumOfDigits(num);
	printf("Sum of digits of %d is %d\n", num, result);
	return 0;
}
