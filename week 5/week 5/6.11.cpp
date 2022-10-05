#include<stdio.h>
#define SIZE 10

int main(void) {
	int b[]{ 10 };
	unsigned int rows[SIZE] = { 2,2,4,5,6,7,2,3,5 };

	for (unsigned int pass = 1; pass < SIZE; ++pass) {
		for (size_t j = 0; j < SIZE; ++j) {
			if (b[j] > b[j + 1]) {
				unsigned int hold = b[j];
				b[j] = b[j + 1];
				b[j + 1] = hold;
			}
		}
	}
	printf("%u", rows);
}
