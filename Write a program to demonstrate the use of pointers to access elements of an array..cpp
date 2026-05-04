#include <stdio.h>
int main() {
	int array[6] = {10, 20, 30, 40, 50, 60};
	int *ptr;
	int i;
	
	ptr = array;
	printf("Accessing array elements using pointers:\n");
	for(i = 0; i < 6; i++)
	{
		printf("Elrement %d = %d\n", i, *(ptr + i));
	}
	return 0;
}
