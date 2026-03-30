#include <stdio.h>

int main() {
	int array[11] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110};
	int i;
	
	printf("Elements of the array are:\n");
	
	for(i = 0; i < 11; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
	
	return 0;
}
