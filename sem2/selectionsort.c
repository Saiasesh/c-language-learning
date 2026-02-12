#include<stdio.h>
int selectionsort(int a[],int n);
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
	selectionsort(a,n);
	printf("\nthe array after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
selectionsort(int a[],int n)
{
	int i,j,pos,temp;
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
			pos=j;
			}
			{
				temp=a[i];
				a[i]=a[pos];
				a[pos]=temp;
				
			}
		}
	return 0;
	}
	
