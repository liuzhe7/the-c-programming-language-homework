#include <stdio.h>

int main(int argc, char const *argv[])
{
  /* code */
  printf("hello,  ");
  printf("world");
  printf("\c"); // warning: unknown escape sequence: '\c'
  return 0;
}
