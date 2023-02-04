#include<stdio.h>
int main()
{
	int n;
	printf("enter number of elements in array:\n");
	scanf("%d",&n);
	int a[n];
	int i,j,k,x;
	for(i=0;i<=n;i++)
	{
		printf("enter element %d:\n",i+1);
		scanf("%d",a[i]);
	}
	for(j=0;j<=n-1;j++)
	{
		for(k=j+1;k<=n-1;k++)
		{
			if(a[j]>a[k])
			{
				x=a[k];
				a[j]=a[k];
				a[j]=x;
			}
		}
	}
	printf("maximum element is%d\n",a[n-1]);
	printf("minimum element is %d",a[0]);
	return 0;
} 
