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
	}	int addValue,addIndex;
	printf("Nhap gia tri value: ");
	scanf("%d",&addValue);
	printf("Nhap gia tri index: ");
	scanf("%d",&addIndex);
	arr[addIndex]=addValue;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
