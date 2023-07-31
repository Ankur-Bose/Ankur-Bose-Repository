#include<stdio.h>
void sort(int *arr, int n)
{
	int j,temp,i;
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-j-1;i++)
		{
		
			if(arr[i]>arr[i+1])
			{
				temp = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}
int main()
{

int arr[100], s, element,i,check;
    printf("Enter the size of array \n");
    scanf("%d",&s);
    printf("Enter the array elements \n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,s);
    printf("The updted arry is \n");
    for(i=0;i<s;i++)
    {
        printf("%d\n",arr[i]);
    }
}
