#include <stdio.h>
/*int selection_sort(int n,int a[n])
{
	int i,j,t,min;
	for (i=0;i<n;i++)
	{
		min=a[i];
		for (j=i;j<n-1;j++)
		{
			if (a[j]<a[i])
			{
				min=a[j];
			}
		}
		t=min;
		a[j]=t;
		a[i]=a[j];
	}
}*/
int selection_sort(int n, int a[n])
{
	int i,j,min,t;
	for (i=0;i<n;i++)
	{
		min=i;
		for (j=i+1;j<n;j++)
		{
			if (a[j]<a[min])
			{
				min=j;
			}
		}
		if (min!=i)
		{
		t=a[i];
		a[i]=a[min];
		a[min]=t;
		}
	}
}
main()
{
	int i,b[7]={81,33,52,86,41,1,5};
	selection_sort(7,b);
	for (i=0;i<7;i++)
	{printf("%d\n",b[i]);}
}
