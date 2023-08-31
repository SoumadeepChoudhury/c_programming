//WAP to check if a character is a vowel or consonant.
#include<stdio.h>
int main(){
  char chr;
  printf("Enter a character: ");
  scanf("%c",&chr);
  if(chr=='a' || chr=='e' || chr=='i' || chr=='o' || chr=='u'){
    printf("Character entered is vowel.\n");
  }else{
    printf("Character entered is consonant.\n");
  }
  return 0;
}
