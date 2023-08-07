#include <stdio.h>
#include <string.h>

int main() {
    int c, len;
    char string[100]; // 100 is the max length of the string
    memset(string, 0, sizeof(string)); // sizeof(string) = 100
    len = 0;
    while ((c = getchar()) != EOF && len < sizeof(string)-1) {
        if (len > 0 && string[len-1] == ' ' && c == ' ')
            continue;
        else
            string[len++] = c;
    }
    string[len] = '\0';
    printf("%s\n", string);
    return 0;
}
