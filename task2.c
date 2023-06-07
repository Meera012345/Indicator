#include<stdio.h>
main()
{
	int a[100],i,n;
	int *p1;
	printf("Enter Array size:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	p1=a;
	for(i=0;i<n;i++)
	{
		printf("%u===>%d\n",p1+i,*(p1+i));
	}
}