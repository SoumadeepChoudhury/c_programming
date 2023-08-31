//WAP to find if a character is an alphabet or not.
#include<stdio.h>
int main(){
  char chr;
  printf("Enter a character: ");
  scanf("%c",&chr);
  if((chr>=65 && chr<=90) || (chr>=97 && chr<=122)){
    printf("%c is an alphabet.",chr);
  }else if(chr>=48 && chr<=57){
    printf("%c is a digit.",chr);
  }
  return 0;
}
