#include <stdio.h>

int main(int n, char** s)
{
  printf("ilosc arg %d\n", n);
  printf("zmiana kodu o 12:40\n");
  long i;
  for(i=1;i<n;i++) printf("arg[%d] = '%s'\n", i, s[i]);
  if (sscanf(s[1], "%d", &i)) printf("i = %d\n", i);
  return 0;
}
