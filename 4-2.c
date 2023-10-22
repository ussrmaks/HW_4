#include <stdio.h>
int main ()
{
int month;
printf("Введите номер месяца от 1 до 12: ");
scanf("%d",&month);

switch (month) {
	case 1: case 2: case 12:
	    printf("Зима %d\n",month);
	    break;
	case 3: case 4: case 5:
	    printf("Весна %d\n",month);
	    break;
	case 6: case 7: case 8:
	    printf("Лето %d\n",month);
	    break;
	case 9: case 10: case 11:
	    printf("Осень %d\n",month);
	    break;
	default:
	    printf("Введён некорректный номер месяца! %d\n",month);
	    break;
}
return 0;
}
