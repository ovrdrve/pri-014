#include "../include/bit_utils.h"
#include "../include/converters.h"
#include "../include/ui.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT 100

int main() {
  int choice;
  char input[MAX_INPUT];
  char result[64];

  print_welcome();

  while (1) {
    choice = show_menu();

    switch (choice) {
    case 1: {
      // Десятичное -> Двоичное
      printf("Введите десятичное число: ");
      int num;
      scanf("%d", &num);
      clear_input();
      dec_to_bin(num);
      break;
    }

    case 2: {
      // Двоичное -> Десятичное
      printf("Введите двоичное число: ");
      safe_read_line(input, MAX_INPUT);
      int dec = bin_to_dec(input);
      if (dec == -1)
        printf("Ошибка: недопустимый символ в двоичном числе\n");
      else
        printf("Десятичное значение: %d\n", dec);
      break;
    }

    case 3: {
      // Подсчет единичных битов
      printf("Введите целое число: ");
      unsigned int num;
      scanf("%u", &num);
      clear_input();
      printf("Количество единичных битов: %d\n", count_ones(num));
      break;
    }

    case 4: {
      // Циклический сдвиг
      printf("Введите число и количество сдвигов: ");
      unsigned int num;
      int shifts;
      scanf("%u %d", &num, &shifts);
      clear_input();
      unsigned int rotated = rotate_right(num, shifts);
      printf("Результат сдвига: %u (0x%X)\n", rotated, rotated);
      break;
    }

    case 5: {
      // Конвертер в любую систему
      printf("Введите число и основание (2-16): ");
      int num, base;
      scanf("%d %d", &num, &base);
      clear_input();
      if (base < 2 || base > 16) {
        printf("Ошибка: основание должно быть от 2 до 16\n");
      } else {
        to_base(num, base, result);
        printf("Число %d в системе %d: %s\n", num, base, result);
      }
      break;
    }

    case 0:
      printf("Программа завершена.\n");
      return 0;

    default:
      printf("Неверный выбор. Попробуйте снова.\n");
    }
  }

  return 0;
}
