#include <stdio.h> 

 
void swap(int *xp, int *yp) 
{ 

    int temp = *xp; 

    *xp = *yp; 

    *yp = temp; 
} 


void bubbleSort(int arr[], int n) 
{ 

   int i, j,count=0; 

   for (i = 0; i < n-1; i++)   
	    
   {
       for (j = 0; j < n-i-1; j++)  
        {
           if (arr[j] > arr[j+1]) 

              swap(&arr[j], &arr[j+1]); 
	  count++;
	}
    }
   printf("the comparision:%d\n",count);
} 

 
void printArray(int arr[], int size) 
{ 

    int i; 

    for (i=0; i < size; i++) 

        printf("%d ", arr[i]); 

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
    bubbleSort(arr, n); 

    printf("Sorted array: \n"); 

    printArray(arr, n); 

    return 0; 
} 

