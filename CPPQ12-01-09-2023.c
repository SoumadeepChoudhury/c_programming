//Write a C Program to Find Largest Number Among Three Numbers.
#include<stdio.h>
int main(){
  int num1,num2,num3;
  printf("Enter number1: ");
  scanf("%d",&num1);
  printf("Enter number2: ");
  scanf("%d",&num2);
  printf("Enter number3: ");
  scanf("%d",&num3);
  if(num1>num2 && num1>num3) printf("%d is the largest.",num1);
  else if(num2>num1 && num2>num3) printf("%d is the largest.",num2);
  else if(num3>num1 && num3>num2) printf("%d is the largest.",num3);
  else if((num1==num2 || num1==num3) && (num1>num2 || num1>num3)) printf("%d is the largest.",num1);
  else if((num1==num2 || num2==num3) && (num2>num1 || num2>num3)) printf("%d is the largest.",num2);
  else if((num1==num3 || num2==num3) && (num3>num1 || num3>num2)) printf("%d is the largest.",num3);
  else printf("All are equal.");
  return 0;
}
