//Write a C Program to Check Whether Number is Even or Odd.
#include<stdio.h>
int main(){
  int num;
  printf("Enter number to check: ");
  scanf("%d",&num);
  if(num%2==0) printf("Even\n");
  else printf("Odd\n");
  return 0;
}
