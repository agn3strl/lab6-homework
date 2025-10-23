#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int pN, ch;
    puts("Введите число (меньше 1000):");
    scanf("%d", &pN);
    if (pN > 1000 || pN < -1000) puts("Число не соответствует условию");
    else {
        int N = fabs(pN);
        puts("Вы хотите вывести первую или последнюю цифру числа? (0 - первую, 1 - последнюю)");
        scanf("%d", &ch);
        if (ch == 0)
        {
            if (N < 100) {
                if (N < 10) puts("Число состоит из одной цифры");
                else printf("Первая цифра введенного числа %d", N / 10);
            }
            else printf("Первая цифра введенного числа %d", N / 100);
        }
        else printf("Последняя цифра введенного числа %d", N % 10);
    }
    return 0;
}