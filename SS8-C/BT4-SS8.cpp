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
	int addValue,addIndex;
	printf("Nhap gia tri value: ");
	scanf("%d",&addValue);
	printf("Nhap gia tri index: ");
	scanf("%d",&addIndex);
	int new_arr[n+1];
	for(i=0;i<addIndex;i++)
	{
		new_arr[i]=arr[i];
	}
	for(i=addIndex+1;i<n+1;i++)
	{
		new_arr[i]=arr[i-1];
	}
	new_arr[addIndex]=addValue;
	for(i=0;i<n+1;i++)
	{
		printf("%d\t",new_arr[i]);
	}
	return 0;	
}

