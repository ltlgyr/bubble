//this is the bubble sort .
#include <stdio.h>
int bubble(int a[], int length)
{
	int i,j;
	int temp;
	for(i = length -1; i >0;  i--)
	{
		for (j = 0; j < i; j ++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
			}
		}
	}
	return 0;
}
int cbubble(int a[], int length)
{
	int i,j;
	int *p;
	int temp; 
	for(i = length - 1; i >0;  i--)
	{
		p = &a[0];
		for (j = 1; j <= i; j ++)
		{
			if(*p < a[j])
			{
				p = &a[j];
			}
		}
		temp = *p;
		*p = a[i];
		a[i] = temp;
	}
	return 0;
}
