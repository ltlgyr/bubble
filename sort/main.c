#include <stdio.h>
#include "sort.h"

void  print_sort(int a[], int length)
{
	int i;
	for (i =0; i <length; i++)
		printf("\ta[%d]= %d\n", i, a[i]);
}

void test_bubble()
{
	int a[]= {7, 6 , 3,4,2,1};
	printf("src:\n");
	print_sort(a, sizeof(a)/sizeof(int));
	printf("des:\n");
	bubble_sort (a, sizeof(a)/sizeof(int));
	print_sort(a, sizeof(a)/sizeof(int));
}

void test_cbubble()
{
	int a[]= {7, 6 , 3,4,2,1};
	printf("src:\n");
	print_sort(a, sizeof(a)/sizeof(int));
	cbubble_sort (a, sizeof(a)/sizeof(int));
	printf("des:\n");
	print_sort(a, sizeof(a)/sizeof(int));
}
void test_cock_sort( )
{
	int a[]= {7, 6 , 3,4,2,1};
	printf("src:\n");
	print_sort(a, sizeof(a)/sizeof(int));
	cock_sort(a, sizeof(a)/sizeof(int));
	printf("des:\n");
	print_sort(a, sizeof(a)/sizeof(int));
}

void test_ins_sort( )
{
	int a[]= {7, 6 , 3,4,2,1};
	printf("src:\n");
	print_sort(a, sizeof(a)/sizeof(int));
	ins_sort(a, sizeof(a)/sizeof(int));
	printf("des:\n");
	print_sort(a, sizeof(a)/sizeof(int));
}
void test_sele_sort( )
{
	int a[]= {7, 6 , 3,4,2,1};
	printf("src:\n");
	print_sort(a, sizeof(a)/sizeof(int));
	sele_sort(a, sizeof(a)/sizeof(int));
	printf("des:\n");
	print_sort(a, sizeof(a)/sizeof(int));
}

int main()
{
    test_ins_sort();
	return 0;
}
