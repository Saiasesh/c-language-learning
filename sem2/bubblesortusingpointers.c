#include<stdio.h>
int bubblesort(int *a[], int *n);
int bubbleprint(int *a[],int *n);
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("&d";a[i]);
	}
}
void swap(int *a,int *b);
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a[100],n,i;
	printf("enter the no.of elements to the array");
	scanf("%d",&n);
	printf("enter the elements to the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array before sorting:");
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
	bubblesort(&a,&n);
	printf("array after sorting:");
	bubbleprint(&a,&n);
	return 0;
}
int bubblesort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1)
		{
			if(a[j]>a[j+1])
			{
				void swap(&a[j],&a[j+1])
			}
		}
	}
}
	
