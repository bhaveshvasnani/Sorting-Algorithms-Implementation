#include <stdio.h>
#define n 7
int i;
int bubble_sort(int a[])
{
	int j,t;
	for (i=0;i<n;i++)
	{
		//j = 0;
		for (j=0;j<n-1;j++)
		{
			if (a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				// a[j] += a[j+1]; a[j+1] = a[j] - a[j+1]; a[j] -= a[j+1];
			}
		}
	}
}
main()
{
	int b[n]={81,33,52,86,41,1,5};
	bubble_sort(b);
	/*int n,b[n],k;
	printf("Enter number of elements: ");
	scanf("%d",n);
	for (k=0;k<n;k++)
	printf("Enter elements: ");
	{
		scanf("%d",&b[k]);
	}
	printf("Bubble sorting");
	bubble_sort(b[n],n);*/
	for (i=0;i<n;i++)
	{printf("%d\n",b[i]);}
}
