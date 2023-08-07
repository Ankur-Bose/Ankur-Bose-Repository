// matrix multiplication

#include<stdio.h>
void arrayInput(int arr[50][50], int n, int m)
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

int main()
{
	int a[50][50], b[50][50], c[50][50],m,n,i,j,m1,m2,n1,n2,k;
	printf("Enter the size of the matrix 1 \n");
	scanf("%d %d",&m1,&n1);
	printf("Enter the elements of matrix 1 \n");
	arrayInput(a,n1,m1);
	printf("Enter the size of the matrix 1 \n");
	scanf("%d %d",&m2,&n2);
	printf("Enter the elements of matrix 2 \n");
	arrayInput(b,n2,m2);
	printf("The matrix multiplication is as follows \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j] = c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	printf("The matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
				printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

