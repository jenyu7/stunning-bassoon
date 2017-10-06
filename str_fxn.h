#include <stdio.h>
#include <stdlib.h>

//function headers
int mystrlen( char *str);
char * mystrncpy(char *dest, char *source, int size);
char * mystrcat(char *dest, char *souce);
int mystrcmp(char *s1, char *s2);
char * mystrchr(char *s, char c);

//returns the length of a null terminated string
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

//copies a string from a source to a destination, up to a certain length
char * mystrncpy(char * dest, char * src, int size)
{
  int i;
  for (i = 0; i < size; i ++)
    {
      dest[i] = src[i];
    }
  return dest;
}

//returns first occurence of c in str
char * mystrchr( char *str, char c)
{
  while(*str)
    {
      if(*str == c)
	{
	  return str;
	}
      str ++;
    }
  return NULL;
}



/*
int main()
{
  char * old = "hi there, how are you";
  char new[10];
  //printf("%s\n", mystrncpy(new, old, 5));
  printf("%s\n", mystrchr(old, 'e'));
}
*/
