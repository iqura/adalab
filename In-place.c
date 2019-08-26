#include <stdio.h>

 

int main()

{

  int a[100], n, i, j, position, swap;

 

  printf("Enter number of elements\n");

  scanf("%d", &n);

 

  printf("Enter %d integers\n", n);

 

  for (i = 0; i < n; i++)

    scanf("%d", &a[i]);

 

  for (i= 0; i< (n - 1); i++)

  {

    position = i;

   

    for (j= i+ 1; j < n; j++)

    {

      if (a[position] > a[j])

        position = j;

    }

    if (position != i)

    {

      swap = a[i];

      a[i] = a[position];

      a[position] = swap;

    }

  }

 

  printf("Sorted list in ascending order:\n");

 

  for (i = 0; i < n; i++)

    printf("%d\n", a[i]);

 

  return 0;

}

Output:-

Enter number of elements:5
Enter 5 integers:78
3
89
2
23
Sorted list in ascending order:
2
3
23
78
89

