#include<stdio.h>
int binary(int *arr, int size, int ele,int low, int high)
{
	int mid;
	while(low<=high)
	{
	mid = (high+low)/2;
	if(arr[mid]==ele)
	return mid;
	if(arr[mid] > ele)
	high = mid - 1;
	if(arr[mid] < ele)
	low = mid+1;
	}
	return -1;
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
    printf("Enter the element \n");
    scanf("%d",&element);
    check = binary(arr,s,element,0,s-1);
    if(check==-1)
    {
	printf("Element not found ");
	}
    else
    printf("Element found at position %d\n",check+1);

    return 0;
}
