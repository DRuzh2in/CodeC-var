#include <stdio.h>

int i = 3; //номер лабораторной работы
int YY = 46; //год поступления
int M = 9; // месяц поступления
int NN = 31; // номер в группе
int CNT =15;

int main() {

    int VAR = ( ( ( ( YY * 10 + M ) * 100 + NN ) * 10 + i ) * 10 + NN ) % CNT + 1;
    printf("%d", VAR);
    return 0;
}