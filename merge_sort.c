#include<stdio.h>
#include<stdlib.h>
 
void Merge(int a[], int tmp[], int lpos, int rpos, int rend)
{
    int i, lend, n, tmppos;
    lend = rpos - 1;
    tmppos = lpos;
    n = rend - lpos + 1;
 
    while(lpos <= lend && rpos <= rend)
    {
        if(a[lpos] <= a[rpos])
            tmp[tmppos++] = a[lpos++];
        else
            tmp[tmppos++] = a[rpos++];
    }
 
    while(lpos <= lend)
        tmp[tmppos++] = a[lpos++];
    while(rpos <= rend)
        tmp[tmppos++] = a[rpos++];
 
    for(i = 0; i < n; i++, rend--)
        a[rend] = tmp[rend];
}
 
void MSort(int a[], int tmp[], int left, int right)
{
    int center;
    if(left < right)
    {
        center = (left + right) / 2;
        MSort(a, tmp, left, center);
        MSort(a, tmp, center + 1, right);
        Merge(a, tmp, left, center + 1, right);
    }
}
void MergeSort(int a[], int n)
{
    int *tmparray;
    tmparray = malloc(sizeof(int) * n);
    MSort(a, tmparray, 0, n-1);
    free(tmparray);
}
main()
{
    int i, n, a[10];
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements :");
    for(i = 0; i < n; i++)
    {
        scanf("\n%d",&a[i]);
    }
    MergeSort(a,n);
    printf("\nThe sorted elements are :");
    for(i = 0; i < n; i++)
        printf("\n%d  ",a[i]);
    printf("\n");
}

Output:-
Enter the number of elements :7
Enter the elements :
45
6
3
76
32
12
1
The sorted elements are :
1  
3  
6  
12  
32  
45  
76  
