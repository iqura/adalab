#include<stdio.h>
int main()
{
	 int i,j,temp,min,n,k,a[10];
	printf("enter the number of elemnts:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&a[i]);
	}
	printf("enter the kth number:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("the smallest elemt is: %d",a[k-1]);
}
	
Output:
enter the number of elemnts:5

enter the element3

enter the element35

enter the element6

enter the element4

enter the element1

enter the kth number :2

the smallest elemt is: 3
