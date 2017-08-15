/*
THEORY:----------------------------------------------------------------------------------------------------------------------------------------------
According to this theory the median value of the sub array is selected as selecting the first element increases the number of computations.
Median value = left_index + (right_index - left_index)/2
This can also be written as (left_index + right_index)/2
This method of choosing the pivot element is quite successful and undergoes less number of computations.
Here we are not simply taking middle index value as (right_index - left_index)/2 because in many cases the index would be out of the bounds of the sub
array (Ex: l=5,R=9 then middle index would be 2 which is not in the range of subarray)
Since sub-lists of sorted / identical elements crop up a lot towards the end of a sorting procedure on a large set, versions of the quicksort algorithm which choose the pivot as the middle element run much more quickly on large sets of numbers. 
This theory cannot be called as the best method but can be used widely for various cases.
*/
#include <stdio.h>
#include <string.h>
void quicksort(int a[],int p,int r)
{
	int q;
	if (p<r)
	{
		q=partition(a,p,r);
		quicksort(a,p,q);
		quicksort(a,q+1,r);
	}
}
int partition(int a[],int p,int r)
{
	int i,j;
	int x,temp;
	x=a[p+(r-p)/2];
	i=p-1;
	j=r+1;
	while (1)
	{
		do
		{
			j=j-1;
		}while (a[j]>x);
		do
		{
			i=i+1;
		}while (a[i]<x);
		if (i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
			return j;
	}
}
main()
{
	int i;
	int a[8]= {1,26,-4,45,11,0,15,99};
	for (i=0;i<8;i++)
		printf("%d\t",a[i]);
	printf("\nAfter sorting using quicksort-----------------------\n");
	quicksort(a,0,7);
	for (i=0;i<8;i++)
		printf("%d\t",a[i]);
}
