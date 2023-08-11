#include <stdio.h>
#include <ctype.h>

#define MAXFILENAMELEN 100

int main() {
  char filename[MAXFILENAMELEN];
  int count[123] = {0};
  printf("Enter the name of the file: ");
  scanf("%s", filename);
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("Error opening file\n");
    return 1;
  }
  char c;
  while ((c = fgetc(fp)) != EOF) {
    if (isalpha(c)) {
      count[c]++;
    }
  }
  // print the result
  printf("Word length count\n");
  for (int i = 65; i <= 90; i++) {
    printf("%c: %d\n", i, count[i]);
  }
    for (int i = 97; i <= 122; i++) {
    printf("%c: %d\n", i, count[i]);
  }

  fclose(fp);  // close file
  return 0;
}