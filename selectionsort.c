#include<stdio.h>
//selection sort in ascending order...
int main()
{
	int arr[50],i,n,j,min,temp;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
	for(j=i+1;j<n;j++)
	{
		if(arr[j]<arr[min])
		{
			min=j;
		}
		}
	if(min!=i)
	{
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
			}		
	}
	printf("Sorting the elements in ascending order: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
