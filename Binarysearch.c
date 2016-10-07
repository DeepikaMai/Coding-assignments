#include <stdio.h>
#include<conio.h>
void main()
{
    int i, j, a, n, number[30],val,mid,lowr,highr;
 
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j])
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);

printf("Enter the value to be searched:");
    scanf("%d",&val);

// middle value calculation

    lowr=0;
    highr=n-1;
    mid=(lowr+highr)/2;
// searching
		 while (lowr <= highr) {
      if (number[mid] < val)
         lowr = mid + 1;    
      else if (number[mid] == val) {
         printf("%d found at location %d.\n", val, mid+1);
         break;
      }
      else
         highr = mid - 1;
 
      mid = (lowr + highr)/2;
   }
   if (lowr > highr)
      printf("Not found! %d is not present in the list.\n", val);
getch();
}
