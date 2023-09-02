//Write a C Program to Check Whether a Number is Positive, Negative, or Zero.
#include<stdio.h>
int main(){
  int num;
  printf("Enter Number: ");
  scanf("%d",&num);
  if(num<0) printf("Negative Number.");
  else if(num>0) printf("Positive Number.");
  else printf("Zero.");
  return 0;
}
