#include <stdio.h>
int main ()
{
int num, res=1;
printf("Введите число: ");
scanf("%d",&num);
if (num>=8) 
for (int i=8; i<=num; ++i)
  {
    res*=i;
  }
else
for (int i=8; i>=num; --i)
  {
    res*=i;
  }

printf("%d\n",res);
return 0;
}
