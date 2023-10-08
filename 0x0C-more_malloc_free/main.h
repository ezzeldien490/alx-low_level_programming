#ifndef MAIN_H
#define MAIN_H


void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *l, int d, int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char);
int multiply(int num1, int num2);
int isDigitsOnly(const char *str);
int main(int argc, char *argv[]);
#endif
