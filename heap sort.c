#include <stdio.h>
void heapify(int A[],int i,int n)
{
	int largest,temp;
	int l=2*i+1;
	int r=2*i+2;
	if (l<n && A[l]>A[i])
		largest=l;
	else
		largest=i;
	if (r<n && A[r]>A[largest])
		largest=r;
	if (largest!=i)
	{
		temp=A[largest];
		A[largest]=A[i];
		A[i]=temp;
		heapify(A,largest,n);
	}
}
void buildheap(int A[],int n)
{
	int i;
	for (i=(n-1)/2;i>=0;i--)
		heapify(A,i,n);
}
void heapsort(int A[],int n)
{
	int i,m,temp;
	buildheap(A,n);
	m=n;
	for (i=n-1;i>=1;i--)
	{
		temp=A[0];
		A[0]=A[i];
		A[i]=temp;
		m=m-1;
		heapify(A,0,m);
	}
}
main()
{
	int i;
	int A[7]={1,-1,23,4,56,77,3};
	for (i=0;i<7;i++)
		printf("%d\t",A[i]);
	printf("\nAfter sorting\n");
	heapsort(A,7);
	for (i=0;i<7;i++)
		printf("%d\t",A[i]);
}
