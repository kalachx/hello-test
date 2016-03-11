#include <stdio.h>

int main(int n, char** s)
{
  printf("ilosc arg %d\n", n);
  printf("zmiana kodu o 12:40\n");
  long i, j;
  for(i=1;i<n;i++) 
  if (sscanf(s[i], "%d", &j)) printf("arg[%d] = '%s'\n", j);
  //printf("arg[%d] = '%s'\n", i, s[i]);
  
  return 0;
}
