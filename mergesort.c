//incorrect output
#include <stdio.h>
void merge(int a[], int p, int q, int r)
{
    int b[10],l1,r1,k,i=0;
    l1=p;
    r1=q+1;
    i=p;
    while (l1<=q && r1<r)
	{
		if (a[l1]<a[r1])
		{
			b[i++]=a[l1++];
		}
		else
		{
			b[i++]=a[r1++];
		}
	}
    while (l1<=q)
    {
        	b[i++]=a[l1++];
    }
    while (r1<r)
    {
        	b[i++]=a[r1++];
    }
	for(i=p;i<r;i++)
	{
		a[i]=b[i];
	}
}
void mergesort(int a[], int p, int r)
{
	int q;
    if (q < r)
    {
    	q=(p+r)/2;
        mergesort(a, p, q);
        mergesort(a, q+1, r);
        merge(a, p, q, r);
    }
}
void main()
{
	int i,a[5]={1,16,44,0,49};
	for (i=0;i<5;i++)
		printf("%d\t",a[i]);
	printf("\nAfter sorting------------\n");
	mergesort(a,0,5);
	for (i=0;i<5;i++)
		printf("%d\t",a[i]);
}
