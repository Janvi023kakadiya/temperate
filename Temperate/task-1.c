#include<stdio.h> 

int main()
{
  char ch='A';
  do {
    printf("%c \n", ch);
    ch = ch +1;
  } while(ch <= 'Z');
  return 0;
}
