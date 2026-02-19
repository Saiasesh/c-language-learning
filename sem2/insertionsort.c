#include<stdio.h>
int insertionsort(int a[],int n);
int main()
{
	int a[100],n,i;
	printf("enter the no.of elements to the array:");
	scanf("%d",&n);
	printf("enter the elements to the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array before sorting:");
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
	insertionsort(a,n);
	printf("\nthe array after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
int insertionsort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
		}
		a[j+1]=temp;
		}
		return 0;
}
