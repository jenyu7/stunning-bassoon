#include <stdio.h>
#include <stdlib.h>


int mystrlen( char *str);
char * mystrncpy(char *dest, char *source, int size);
char * mystrcat(char *dest, char *souce);
int mystrcmp(char *s1, char *s2);
char * mystrchr(char *s, char c);

int main()
{
  //printf("this better print\n");
  char * str1 = "hello";
  char * str2;
  //printf("part 1\n");
  mystrncpy(str2, str1, 4);
}

//Returns the length of a null terminated string
int mystrlen(char *str)
{
  int length = 0;
  while (*str)
    {
      length ++;
      str ++;
    }
  return length;
}

char * mystrncpy(char *dest, char *source, int size)
{
  while( *source <= *source+size)
    {
      printf("here\n");
      *dest = &source;
      printf("does it come here \n");
      //printf("current dest value: %d\n", *dest);
      source ++;
    }
  return dest;
}
