int mystrlen( char *str);
char * mystrncpy(char *dest, char *source, int size);
char * mystrcat(char *dest, char *souce);
int mystrcmp(char *s1, char *s2);
char * mystrchr(char *s, char c);

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
  int i;
  for (i = 0; i < size && source[i] != '\0'; i++)
    {
      printf("What tf is happening");
      printf("%s", dest);
      printf("%s", source);
      printf("currently at value %d \n", dest[i]);
      dest[i] = source[i];
      //printf("did we make it? \n");
    }
  dest[i] = '\0';
  return dest;
}
