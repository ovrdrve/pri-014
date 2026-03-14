#ifndef BIT_UTILS_H
#define BIT_UTILS_H

// Подсчитывает количество единичных битов в числе (popcount)
int count_ones(unsigned int n);

// Выполняет циклический сдвиг вправо на k позиций
unsigned int rotate_right(unsigned int n, int k);

// Выводит побитовое представление числа
void print_bits(unsigned int n);

#endif
