/*Задание 2. Вычислить номер дня в невисокосном году по заданным числу и месяцу.
Входные данные: Два целых числа. Первое число m - номер месяца. Второе число d - номер дня в месяце.
Выходные данные: Одно целое число - порядковый номер дня в невисокосном году.*/

#include <stdio.h>
int main()
{
    int m,d,nomer;
    scanf("%d",&m);
    scanf("%d",&d);
    
   switch (m) {
   case 1:
        nomer = d;
        printf("%d",nomer);
        break;
   case 2:
        nomer = d + 31;
        printf("%d",nomer);
        break;
    case 3:
        nomer = d + 59;
        printf("%d",nomer);
        break;
    case 4:
        nomer = d + 90;
        printf("%d",nomer);
        break;
    case 5:
        nomer = d + 120;
        printf("%d",nomer);
        break;
    case 6:
        nomer = d + 151;
        printf("%d",nomer);
        break;
    case 7:
        nomer = d + 181;
        printf("%d",nomer);
        break;
    case 8:
        nomer = d + 212;
        printf("%d",nomer);
        break;
    case 9:
        nomer = d + 243;
        printf("%d",nomer);
        break;
    case 10:
        nomer = d + 273;
        printf("%d",nomer);
        break;
    case 11:
        nomer = d + 304;
        printf("%d",nomer);
        break;
    case 12:
        nomer = d + 334;
        printf("%d",nomer);
        break;
   }
}
