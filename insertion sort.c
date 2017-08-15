int insertion_sort(int n,int a[n])
{
	int i,j,t;
	for (i=1;i<n;i++)
	{
		j=i;
		while(j>0 && a[j]>a[j-1])
		{
			t=a[j];
			a[j]=a[j-1];
			a[j-1]=t;
			j--;
		}
	}
}
main()
{
	int i,b[7]={6,3,56,8,2,4,5};
	insertion_sort(7,b);
	/*int n,b[n],k;
	printf("Enter number of elements: ");
	scanf("%d",n);
	for (k=0;k<n;k++)
	printf("Enter elements: ");
	{
		scanf("%d",&b[k]);
	}
	printf("Insertion sorting");
	insertion_sort(b[n],n);*/
	for (i=0;i<7;i++)
	printf("%d\n",b[i]);
}
