# Домашнее задание к работе 6
## Условие задачи
Дано число N (N<1000). Написать программу, которая по запросу
пользователя выведет последнюю или первую цифру введенного числа.
## 1. Алгоритм и блок-схема
### Алгоритм 
1. Начало
2. Инициализировать переменные:
   * `pN` - переменная, в которой будет хранится значение введенного числа
   * `ch` - переменная, в которой будет хранится значение 0 или 1 для определения, какое из условий выполнить - вывести первую или последнюю цифру
4. Ввести число с клавиатуры (записывается в переменную `pN`)
5. Проверка выполнения условия:
   1. Если число больше 1000 или меньше -1000, вывести "Число не соответствует условию"
   2. Иначе:
      1. Ввести 0 или 1 с клавиатуры в зависимости от того, какую цифру требуется вывести - 0 для первой цифры, 1 для последней цифры
      2. Инициализировать переменную:
      3. `N` - абсолютное значение переменной `pN` (для корректного вывода цифры)
      4. Проверка выполнения условия:
         1. Если требуется вывести первую цифру (ch = 0):
            1. Если `N` < 100:
               1. Если `N` < 10  вывести "Число состоит из одной цифры"
               2. Иначе вывести первую цифру введенного числа (частное от деления `N` на 10)
            2. Иначе вывести первую цифру введенного числа (частное от деления `N` на 100)
         2. Иначе вывести последнюю цифру введенного числа (остаток от деления `N` на 10)
6. Конец
### Блок-схема
![Блок-схема алгоритма](blockshemelab6.drawio.png)
[Ссылка на draw.io](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=blockshemelab6.drawio.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%20%E2%80%94%201%22%20id%3D%229xHiGHv2OAvlIjxfWtkp%22%3E7Vxtj5s4EP41ke4%2BpAIMJPmYt21PulaVVnfXfnQSL6ElOAfsbnK%2F%2Fmxs82LsQLYEok2kVRYPxjbPPGOPZ5wMwHx3%2BBjB%2FfYz3qBgYBmbwwAsBpZlWq5D%2FlHJkUvcscEkXuRvuCwXPPr%2FIS4U1Z79DYpLFROMg8Tfl4VrHIZonZRkMIrwa7naEw7Kve6hx3s0csHjGgaoUu0ff5NsmXRsjXL5J%2BR7W9Gz6U7YnR0UlXnD8RZu8GtBBJYDMI8wTtjV7jBHAUVP4MKee9DczQYWoTBp9MDxMPt7Ar65qxfr42o6D50lGLoWa%2BYFBs%2F8jflok6OAwIvw855XQ1GCDirg4SqQccwHZmavS4iC8A4l0ZFU4Q25%2FAlOkeFINPGaA57JtgWwRwYXQq5kL2s7x4FccCjOgEWBysIYzBbppzFYmIPxSFyTz1n6uawgR3oiPCWF2evWT9DjHq7pnVdiK0S2TXZkUKQtMNOiW0JRr0Attta4iqWpwtK%2BFJRADeWUQ5bD6qSwutcMImeoa%2FcNql1vtSjcTOn8R0rrAMaxvy6jRYw63CDaiZFhhzaePO29EbkCMo4CGCGLUAAT%2F6XcqQot3sNX7JPhZIoBYPLBGZV0I0Me4%2Bdojfhzxdmxvqmx1FQCIw8llaZSBWav%2FnadOhWdfhlYczrDbivKJWvJnl4S%2FcAgQAH2IrgjatyjyCfjQJF872t%2Bo86MnvwDEgtxp2bV%2B1Tl3q1KYwqZHlowK9Pt1q6AarJ0g4RSHadjzfXr%2FvuMxY1hnNrAlFQY7Q%2BpNsVtcuXR%2F8RAybu4cEdNyGN3DNOgbokxGM3pn2WUKgW80jCr6HLRAxuMy5uReBdt8W71HF%2FRIpipsT%2FP4m6vas3IC1dTYzWlhiqq01gqQRgeC9X2tEKsH7DcjyjnZGAttjsNjO5sYebYElscoxu2yP10whbbrLKFblJsvuuTmUNm26TMFRj4XkiJRMiQul10TvbXMJjyGzt%2Fs6GPzyJEVhq%2Bf6a84oCQdp3ZwFnQtp4THOceWZxE%2BCea4wBTPy%2FEIUrdtiCQRJdbC0xJJU51LbAVFAYX2w%2Bd3LCznWXV3G9LaTa4NqVVdzzCHdr4L0q%2FjGpsyJU0TWvAKFG6Zue6eG7FxTOemI%2BVy4Zwvw%2FQMD7GCdqxvdks8MOfn%2BH6MZU9pJ1R%2BSPyMCL%2F%2F%2FqDlb%2FgBFMxDGMm%2BISCF0SpxYrTyIcBu4xJnWFM9mtP%2FBbtlPxnPLGM5Q7%2F8Ku9CHnhBdacWUUhMJ8sYI31gMV7GCoBW8H1Ty9dAYe8YYpb5K1%2BsxyHjad48btaLcRYpix0Nk6t0iwH0IyS2VpGoc5SfKa2TK%2BtknXzmsW75BqUZwBDCCtd5w2ygS0LrjnDpIxTxWPPxCl5NX78u9i4Z26%2BvPL3Fw9rsBVoIYz9lllXggpUocpSIkWorMmlsDKbOMLEqX3kRRwlW%2BzhEAbLXCq5wnmdPzHec%2F79QEly5Hyki6Fqo3q%2B9yxUzdzUExX5azIv9ES9iVp%2Fjd3sX1JGVRc02mekl0bVzewgDMDwPcFnyYvo2%2FTNcW%2BmXwOVlNdShDeBq0DKHF0KqkkFKWVsyuyHeEyR%2BkVHDhr0TjyjwTzaSUBBh1w3AQVZMfJ%2BoXH0SfIq5AWwreCTpRzuRaMJpiKacItUAUY7VAFuJ1SRu%2BmEKppIxo0EnuoWAYX73GnMwtQcZ7ipQFONkoBiae5WScpUusrRuUI%2FRzO19efmXE2Wrd%2B1S9KLaZ67dokHZff%2BVxcraUAXXZ0E826dDJXNyNlsEJkUKT7UOjt0%2FXTClttOotX5MmWNjMb9Lpp2gzjKFYcFRRioNiwoXuu644JilHc%2F84QBTa7Lgiz9QTNtUk3KpAGT5c8Az6PZxu88F0mzlU9w5wdHVvuMXGTm9%2FI%2Bi1nD8h11%2FVLuUvVA81ym%2FLwmt9lkVMrcZ%2Fm5FDl9ythoJ6N5ZqLZNDSHCQuS%2BiRpMSsq5T2XhQetDJNwFe8bZS9Vuc5SRvPO6DujGzKaE5F8jgY8tb8seICLgmQiaO0W6Gunn0xebv8NJH4XmXldykmklxVneroNF1gqN%2FJCh3ruB3QamWU7swKLoD0MWNjsZo%2FG1OR8K%2Bc9%2BjfIatb3bpDvzSDvFqnPRsiB21HfFgmuJhusg66bIKqjzsSfHUN1uzk4IHfTRTYYKMJA98n73Uzezt2bOjl3O9eWDLU16f8byWjULbV9n86wFRHYm4ua19lU71%2F7af2LmASP6PitWPhOCx8cUVwcijcXx1bcpgYpJNCneyXNnRW3qLF7Jbk9l3Kvyt3YXbhXjsq9aomKOfu%2Bl8h3i1SUz32%2BmYvAkRpq%2BJ3j1gijWP9bIox5n7tyPdvyN8zeer5GbsiWl7WWZi9dPxedvtzWAwmF6ct1R0VGmjV8TEuFPcQNkFQOCJhtBTDsCx0C0%2FWjnW1P17%2FQmqyKV19kTa6l9MFPvhWuCxMzKeUP0cKvTsvidxhrjy%2BxL833du5ROrRmyb%2Fl1Hghl6jlNvyxtXNPxYoB6k7jip%2BQbDpOqf65JkCK%2BQ9%2Bsur576aC5f8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## 2. Реализация программы 
```C
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
```
## 3. Результат работы программы
### Число, большее 1000 или меньшее -1000
Введите число (меньше 1000):
1123
Число не соответствует условию
### Число, меньшее 10
Введите число (меньше 1000):
5
Вы хотите вывести первую или последнюю цифру числа? (0 - первую, 1 - последнюю)
0
Число состоит из одной цифры
### Число, меньшее 100, первая цифра
Введите число (меньше 1000):
45
Вы хотите вывести первую или последнюю цифру числа? (0 - первую, 1 - последнюю)
0
Первая цифра введенного числа 4
### Число, меньшее 100, последняя цифра
Введите число (меньше 1000):
45
Вы хотите вывести первую или последнюю цифру числа? (0 - первую, 1 - последнюю)
1
Последняя цифра введенного числа 5
### Число, большее 100
Введите число (меньше 1000):
890
Вы хотите вывести первую или последнюю цифру числа? (0 - первую, 1 - последнюю)
0
Первая цифра введенного числа 8
### Отрицательное число
Введите число (меньше 1000):
-345
Вы хотите вывести первую или последнюю цифру числа? (0 - первую, 1 - последнюю)
0
Первая цифра введенного числа 3
## 4. Информация о разработчике
Вильальба Агния, группа бТИИ-251
