#include <stdio.h>
#include <stdlib.h>
#include "str_fxn.h"

int main()
{
  char * str1 = "hello";
  char str2[10];
  printf("%s\n", mystrncpy(str2, str1, 4));
  
}


