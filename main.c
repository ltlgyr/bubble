#include <stdio.h>
#include "bubble.h"

void  print_sort(int a[], int length)
{
	int i;
	printf("sort:\n");
	for (i =0; i <length; i++)
		printf("\ta[%d]= %d\n", i, a[i]);
}

void test_bubble()
{
	int a[]= {7, 6 , 3,4,2,1};
	print_sort(a, sizeof(a)/sizeof(int));
	bubble (a, sizeof(a)/sizeof(int));
	print_sort(a, sizeof(a)/sizeof(int));
}

void test_cbubble()
{
	int a[]= {7, 6 , 3,4,2,1};
	print_sort(a, sizeof(a)/sizeof(int));
	cbubble (a, sizeof(a)/sizeof(int));
	print_sort(a, sizeof(a)/sizeof(int));
}

int main()
{
	test_bubble();
	test_cbubble();
	return 0;
}
