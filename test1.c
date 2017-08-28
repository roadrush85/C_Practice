#include <stdio.h>
int main(void)
{
  int i, j, c;
  for (i = 0; ; i++)
  {
    c = 0;
    for (j = 1; j <= 6; j++)
    {
      if (i % j != 0)
      {
        c = 1; break;
      }
    }
    if (c == 0)
    {
      printf("%d\n", i);
      break;
    }
  }

  return 0;

}
