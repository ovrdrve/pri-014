#ifndef UI_H
#define UI_H

// Выводит приветствие
void print_welcome(void);

// Выводит меню и возвращает выбранный пункт
int show_menu(void);

// Очищает буфер ввода stdin
void clear_input(void);

// Безопасно читает строку с ограничением длины
void safe_read_line(char *buffer, int max_len);

#endif
