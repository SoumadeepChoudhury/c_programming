//Write a C Program to Swap Two Numbers.
#include<stdio.h>
int main(){
  int num1,num2;
  printf("Enter number 1: ");
  scanf("%d",&num1);
  printf("Enter number 2: ");
  scanf("%d",&num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("Value of Number 1: %d\nValue of Number 2: %d\n",num1,num2);
  return 0;
}
