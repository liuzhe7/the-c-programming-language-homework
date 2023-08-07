#include <stdio.h>
int main(int argc, char const *argv[])
{
  long space = 0;
  int c;
  long line = 0;
  long tab = 0;
  while ((c = getchar()) != EOF){
    if (c == ' '){
      ++space;
    }
    if (c == '\n'){
      ++line;
    }
    if (c == '\t'){
      ++tab;
    }
  }
  printf("space number:%ld\n", space);
  printf("line number:%ld\n", line);
  printf("tab number:%ld\n", tab);
  return 0;
}
