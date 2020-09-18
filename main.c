// Author: Liam Hooks lrh5428@psu.edu
// Collaborator: Jacob Henderson jrh6433@psu.edu
// Collaborator: Hunter Fristick hjf5143@psu.edu
// Collaborator: John Sweetall jts6052@psu.edu
// Section: 2
// Breakout: 4
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n)
  {
    if (n == 0)
      return 0;
    else
    return(sum_n(n-1) + n);
  }

  void print_n(const char *s, int n)
  {
    if (n != 0){
      printf("%s\n",s);
      print_n(s, n - 1);
    }
  }

int main(void) 
{
  char *num = readline("Enter an int: ");
  int numChange = strtod(num, NULL);
  printf("sum is %d.\n",sum_n(numChange));
  char *str = readline("Enter a string: ");
  print_n(str, numChange);
}