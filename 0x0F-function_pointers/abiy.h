#ifndef ABIY_H
#define ABIY_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
