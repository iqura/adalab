#include <stdio.h> 

void swap(int *xp, int *yp) 
{ 

    int temp = *xp; 

    *xp = *yp; 

    *yp = temp; 
} 

  

void selectionSort(int arr[], int n) 
{ 

    int i, j, min_idx,count=0; 

    for (i = 0; i < n-1; i++) 

    { 
        min_idx = i; 

        for (j = i+1; j < n; j++) 
	{
	  count++;

          if (arr[j] < arr[min_idx]) 

            min_idx = j; 

        swap(&arr[min_idx], &arr[i]); 
	}
    } 
     printf("the comparision:%d\n",count);
} 


void printArray(int arr[], int size) 
{ 

    int i; 

    for (i=0; i < size; i++) 

        printf("%d\n", arr[i]); 

    printf("\n"); 
} 

int main()
{
	int arr[10],n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %dth element:",i+1);
		scanf("%d",&arr[i]);
	}
	selectionSort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0;
}

