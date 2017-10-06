#include <stdio.h>
#include <stdlib.h>
#include "str_fxn.h"

int main()
{
  char a[100] = "yoo";
  char b[100] = "yo";
  char c[100] = "hello";
  char d[100] = "hi everyone";
  char e[100] = "Alex";
  char f[100] = "cat";
  char g[100] = "cat";

  char * str1 = "hello";
  char str2[10];
  printf("%s\n", mystrncpy(str2, str1, 4));

  printf("Testing strcat(c,e):\n");
  printf("[mine]: %s \n", mystrcat(c, e)); 
  printf("[standard]: strcat %s \n\n", strcat(c, e));
  printf("Testing strcat(b,f):\n");
  printf("[mine]: %s \n", mystrcat(b, f)); 
  printf("[standard]: strcat %s \n\n", strcat(b, f));
  printf("Testing strcmp(a,b):\n");
  printf("[mine]: %d \n", mystrcmp(a, b)); 
  printf("[standard]: strcat %d \n\n", strcmp(a, b));
  printf("Testing strcmp(f,g):\n");
  printf("[mine]: %d \n", mystrcmp(f, g)); 
  printf("[standard]: strcat %d \n\n", strcmp(f, g));

}


