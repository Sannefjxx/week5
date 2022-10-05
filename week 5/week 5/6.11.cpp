#include<stdio.h>
#define SIZE 10

void sorting(unsigned int a[]);
void smallest(unsigned const int a[]);

int main(void) {
	int d;
	int x;
	unsigned int g[]={0};
	printf("Enter a number:");
	scanf_s("%d", &d);
	x = d + g;
	sorting(g);
	smallest(g);
}
void sorting(unsigned int a[]) {
	for (unsigned int pass = 1; pass <= SIZE; ++pass) {
		for (size_t j = 0; j <= SIZE; ++j) {
			if (a[j] > a[j + 1]) {
				unsigned int hold = a[j];
				a[j] = a[j + 1];
				a[j + 1] = hold;
			}
		}
	}
}
void smallest(unsigned const int a[]) {
	for (size_t h = 0; h < SIZE; ++h) {
		if (h % 20 == 0) {
			puts("");
		}
		printf("%2u", a[h]);
	}
}