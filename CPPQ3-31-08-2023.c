//Write a C Program to Print the ASCII Value of a Character.
#include<stdio.h>
int main(){
  char chr;
  printf("Enter a character: ");
  scanf("%c",&chr);
  printf("ASCII value of %c is %d",chr,chr);
  return 0;
}
