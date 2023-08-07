//calculating trace of the matrix

#include<stdio.h>
int main()
{
	int a[50][50],i,j,m,n,s;
	printf("Enter the size of the 2D array \n");
	scanf("%d %d",&m,&n);
	printf("Enter the array elements \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//calculating trace
	s=0;
	printf("The trace of the matrix are \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				s=s+a[i][j];
			}
		}
	}
	printf("%d\n",s);
}
