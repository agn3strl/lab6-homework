#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int pN, ch;
    puts("������� ����� (������ 1000):");
    scanf("%d", &pN);
    if (pN > 1000 || pN < -1000) puts("����� �� ������������� �������");
    else {
        int N = fabs(pN);
        puts("�� ������ ������� ������ ��� ��������� ����� �����? (0 - ������, 1 - ���������)");
        scanf("%d", &ch);
        if (ch == 0)
        {
            if (N < 100) {
                if (N < 10) puts("����� ������� �� ����� �����");
                else printf("������ ����� ���������� ����� %d", N / 10);
            }
            else printf("������ ����� ���������� ����� %d", N / 100);
        }
        else printf("��������� ����� ���������� ����� %d", N % 10);
    }
    return 0;
}