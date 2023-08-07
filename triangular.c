#include<stdio.h>
int main()
{
	int a[50][50],i,j,m,n,sum=0;
	printf("Enter the size of the matrix \n");
	scanf("%d %d",&m,&n);
	printf("Enter the elements \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	printf("The upper triangular matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<=j)
			printf("%d ",a[i][j]);
			else
			printf("0 ");
		}
		printf("\n");
	}
	return 0; 
}
