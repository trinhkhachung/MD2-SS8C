#include<stdio.h>
int main()
{
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("Nhap arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	int deleteIndex;
	printf("Nhap gia tri deleteIndex: ");
	scanf("%d",&deleteIndex);
	int new_arr[n-1];
	for(i=0;i<deleteIndex;i++)
	{
		new_arr[i]=arr[i];
	}
	for(i=deleteIndex+1;i<n;i++)
	{
		new_arr[i-1]=arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",new_arr[i]);
	}
	return 0;	
}

