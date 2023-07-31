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
int binarySearch(int *array, int x, int low, int high) 
{
	int mid;
  	while(low<=high) 
  	{
    	mid =(high+low)/2;

    	// If found at mid, then return it
    	if (array[mid] == x)
      	return mid;

    // Search the left half
  		if (array[mid] > x)
      	return binarySearch(array, x, low, mid - 1);

    // Search the right half
    if(array[mid] < x )
    	return binarySearch(array, x, mid + 1, high);
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
    sort(arr,s);
    printf("The updated array is \n");
    for(i=0;i<s;i++)
    {
    	printf("%d\n",arr[i]);
	}
    check = binarySearch(arr,element,0,s-1);
    if(check==-1)
    {
	printf("Element not found ");
	}
    else
    printf("Element found at position %d\n",check+1);

    return 0;
}
