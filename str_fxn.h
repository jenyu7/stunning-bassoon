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
      dest[i] = source[i];
    }
  dest[i] '\0';
  return dest;
}
