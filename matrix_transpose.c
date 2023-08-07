#include<stdio.h>
//array input
void arrayInput(int arr[50][50], int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}
//array display
void display(int arr[50][50],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
//transpose
void transpose(int arr[50][50],int n,int m)
{
	int temp,i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[50][50],i,j,trans,m,n;
	printf("Enter the size of the 2D array \n");
	scanf("%d %d",&m,&n);
	printf("Enter the array elements \n");
	arrayInput(arr,m,n);
	printf("The matrix is \n");
	display(arr,m,n);
	printf("The transpose of the matrix is \n");
	transpose(arr,m,n);
	return 0;
}
