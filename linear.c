#include<stdio.h>
int linear(int *arr, int size, int ele)
{
	int pos;
    for(pos=0;pos<size;pos++)
    {
        if(arr[pos]==ele)
        {
            return pos;
            break;
        }
    }
    return 0;
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
    check = linear(arr,s,element);
    if(check==0)
    {
	printf("Element not found ");
	}
    else
    printf("Element found at position %d\n",check+1);

    return 0;
}
