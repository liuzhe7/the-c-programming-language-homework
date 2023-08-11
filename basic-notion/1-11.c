#include <stdio.h>

#define IN 1
#define OUT 0 

int main(int argc, char const *argv[])
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == '\n')
    {
      ++nl;
    }
    if (c == ' ' || c == '\n' || c == '\t' ){
      state = OUT;
    }
    else if (state == OUT)
    {
      /* code */
      state = IN;
      ++nw;
    }
    
  }
  printf("%d %d %d\n", nl, nw, nc);
  
}

// input all the words and then press ctrl + d to get the output

// as much as i know, the program is counting the number of words, lines and characters in the input