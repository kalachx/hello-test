#include <stdio.h>

int main(void)
{
  long i;
  for(i=0;i<10;printf("a%d\n", i),i++,printf("b%d\n", i)) printf("c%d\n", i);
  return 1;
}
