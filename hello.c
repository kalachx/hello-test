#include <stdio.h>

int main(int n, char** s)
{
  printf("Zbudowano %s o godzinie %s\n", __DATE__, __TIME__);
  printf("Ilosc arg %d\n", n-1);
  long i, j;
  for(i=1;i<n;i++) 
    if (sscanf(s[i], "%d", &j)) printf("arg[%d] = %d\n", i, j);
    else printf("arg[%d] = '%s'\n", i, s[i]);
  printf("hello world!");
  return 0;
}
