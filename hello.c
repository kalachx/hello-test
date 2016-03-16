#include <stdio.h>

int main(int n, char** s)
{
  printf("ilosc arg %d\n", n-1);
  printf("Zbudowano %s o godzinie %s\n", __DATE__, __TIME__);
  long i, j;
  for(i=1;i<n;i++) 
    if (sscanf(s[i], "%d", &j)) printf("arg[%d] = %d\n", i, j);
    else printf("arg[%d] = '%s'\n", i, s[i]);
  //printf("arg[%d] = '%s'\n", i, s[i]);
  printf("%d\n", (n==1));
  return (n==1);
}
