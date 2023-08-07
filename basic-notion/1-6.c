#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c;
  while (1)
  {
    c = getchar();
    printf("%d\n",c != EOF);
    if (c == EOF)
      break;
    else
      putchar(c);
  }
  return 0;
}
