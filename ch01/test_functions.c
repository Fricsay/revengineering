#include <stdio.h>
#include <stdlib.h>

extern size_t _strlen(const char *s);
extern char * _strchr(const char *s, int c);
extern void * _memcpy(void *dest, const void *src, size_t n);
extern void * _memset(void *s, int c, size_t n);
extern int _strcmp(const char *s1, const char *s2);
extern char * _strset(const char *str, char c);

int
main(int argc, char *argv[]){
  exit(EXIT_SUCCESS);
}
