/*Напишите программу-калькулятор для четырёх основных арифметических действий.
Входные данные: Символ действия c и два целых числа a, b (b != 0)
Выходные данные: Одно вещественное число, либо строку ERROR!, если введено недопустимое действие. Формат вывода чисел: два знака после запятой*/

#include <stdio.h>
int main()
{
    float a,b,sum,vych,del,proiz;
    char znak;
    scanf("%f\n",&a);
    scanf("%c\n",&znak);
    scanf("%f",&b);
    
    if (znak == '+')
    {
        sum = a+b;
        printf("%.2f\n",sum);
    }
    else if (znak == '-')
    {
        vych = a-b;
        printf("%.2f\n",vych);
    }
    else if (znak == '/')
    {
        del = a/b;
        printf("%.2f\n",del);
    }
    else if (znak == '*')
    {
        proiz = a*b;
        printf("%.2f\n",proiz);
    }
    else
    printf("ERROR!");
}