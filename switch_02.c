#include<stdio.h>
void display(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
}
//bubble sort
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
//for linear search
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
//for binary search iterative 
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
//binary search using recursive 
int binarySearch(int *array, int x, int low, int high) 
{
  if (high >= low) 
  {
    int mid = low + (high - low) / 2;

    // If found at mid, then return it
    if (array[mid] == x)
      return mid;

    // Search the left half
  if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    // Search the right half
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

main()
{
	int arr[100], s, element,i,check1,check2,check3;
	int ch,choice;
    printf("Enter the size of array \n");
    scanf("%d",&s);
    printf("Enter the array elements \n");
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element \n");
    scanf("%d",&element);
	printf("\n");
	printf("Menu \n");
	printf("1. Linear Search \n");
	printf("2. Binary Search using Iteratives\n");
	printf("3. Binary Search using Recursive\n");
	printf("4. Display\n");
	do
	{
	printf("Enter your choice \n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				check1=linear(arr,s,element);
				//linear search
				if(check1==0)
    			{
					printf("Element not found ");
				}
    			else
    			printf("Element found at position %d\n",check1+1);
    			break;
			}
			case 2:
			{
				//binary search uisng ineratives
				check2 = binary(arr,s,element,0,s-1);
    			if(check2==-1)
    			{
					printf("Element not found ");
				}
    			else
    			printf("Element found at position %d\n",check2+1);
    			break;
			}
			case 3:
			{
				sort(arr,s);
				check3 = binarySearch(arr,element,0,s-1);
    			if(check3==-1)
    			{
					printf("Element not found ");
				}
    			else
    			printf("Element found at position %d\n",check3+1);
    			break;
    		}
    		default :
    		{
    			printf("Wrong choice \n");
    			break;
			}
			
		
		}
		printf("Do u want to continue ??");
			scanf("%d",&choice);
	}while(choice ==1);
}
