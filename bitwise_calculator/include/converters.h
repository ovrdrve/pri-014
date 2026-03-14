#ifndef CONVERTERS_H
#define CONVERTERS_H

// Конвертирует десятичное число в двоичное и выводит на экран
void dec_to_bin(int n);

// Конвертирует строку с двоичным числом в десятичное
// Возвращает -1 если строка содержит недопустимые символы
int bin_to_dec(const char *binary_str);

// Конвертирует число в любую систему счисления (основание от 2 до 16)
// Результат сохраняет в строку result
void to_base(int n, int base, char *result);

#endif
