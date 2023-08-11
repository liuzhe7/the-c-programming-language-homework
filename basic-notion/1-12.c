#include <stdio.h>
#include <string.h>

int main() {
  int i = 0;
  char s[1000];
  while ((s[i] = getchar()) != EOF)
  {
    i++;
  }
  int switcher = 0;
  for (int j = 0; j < i; j++)
  { 
    if (s[j] == '\t' || s[j] == '\n' || s[j] == '\b' || s[j] == '\\' || s[j] == ' ') {
      if (switcher == 0) {
       printf("\n");
      }
      switcher = 1;
    } else {
      printf("%c", s[j]);
      switcher = 0;
    }
  }
  return 0;
}