//this is the bubble sort .
#include <stdio.h>
int bubble_sort(int a[], int length)
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

int cbubble_sort(int a[], int length)
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

int cock_sort(int a[], int length)
{
    int left = 0, right = length-1;
    int temp;
    int i,j;
    while (left < right)
    {
        for (i = left; i < right; i ++)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        right --;
    
        for (i = right; i < left; i ++)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        left ++;
    }
}

int ins_sort(int a[], int length)
{
    int pre, current;
    for (int i = 1; i < length; i++) {
        pre = i - 1;
        current = a[i];
        while (pre >= 0 && a[pre] > current) {
            a[pre + 1] = a[pre];
            pre--;
        }
        a[pre + 1] = current;
    }
}

int sele_sort(int a[], int len) 
{
    int  minIndex, temp;
    for (int i = 0; i < len - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < len; j++) {
            if (a[j] < a[minIndex]) {     // 寻找最小的数
                minIndex = j;                 // 将最小数的索引保存
            }
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
} 
