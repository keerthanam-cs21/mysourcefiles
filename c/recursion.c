#include <stdio.h>
int add(int n1, int n2)
{
     int result = 0;
     if(n1 == 0)
          return n2;
     else
        result = add(n2, n1 - 1) + 1;
    return result;
}
int main()
{
     int n1,n2;
     printf("Enter Number 1: ");
     scanf("%d", &n1);
     printf("Enter Number 2 :");
     scanf("%d", &n2);
     int sum = add(n1, n2);
     printf("%d + %d = %d", n1, n2, sum);
     return 0;
}
