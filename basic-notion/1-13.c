#include <stdio.h>
#include <ctype.h>


#define MAXWORDLEN 20
#define MAXFILENAMELEN 100

int main() {
  char filename[MAXFILENAMELEN];
  int count[MAXWORDLEN + 1] = {0};
  printf("Enter the name of the file: ");
  scanf("%s", filename);
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    printf("Error opening file\n");
    return 1;
  }
  int len = 0;
  char c;
  while ((c = fgetc(fp)) != EOF) {
    // if current c is digit or number then add to len
    if (isalpha(c)) {
      len++;
    } else {
      // if current c is not digit or number then add len to count
      if (len > 0) {
        count[len]++;
        len = 0;
      }
    }
  }
  // print the result
  printf("Word length count\n");
  for (int i = 1; i <= MAXWORDLEN; i++) {
    printf("%2d: %d\n", i, count[i]);
  }

  fclose(fp);  // close file
  return 0;
}