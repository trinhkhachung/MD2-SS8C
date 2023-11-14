#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu ");
	scanf("%d",&n);
	int number[n];
	for (int i=0;i<n;i++){
		printf("number[%d] = ",i);
		scanf("%d",&number[i]);		
	}
	int min=number[0];
	int max=number[0];
	for(int i=1;i<n;i++)
	{
		if(min>number[i])
		{
			min=number[i];
		}
		if(max<number[i])
		{
			max=number[i];
		}
	}
	printf("So lon nhat la: %d. So nho nhat la: %d",max,min);
	
}
