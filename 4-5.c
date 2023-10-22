#include <stdio.h>
int main ()
{
int n;
printf("Введите натуральное число n: ");
scanf("%d",&n);
int step = 1, sum = 1;
      for( int i = 1 ; i <= n ; i++)
      {
        step <<= 1;
        sum += step;
      }
      printf("%d\n",sum);

return 0;
}
