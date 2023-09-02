//Write a C Program to Calculate Sum of Natural Numbers .
#include<stdio.h>
int main(){
  int n;
  int sum=0;
  printf("Enter the max limit for natural numbers: ");
  scanf("%d",&n);
  int i=1;
  while(i<=n){
    sum+=i;
    i++;
  }
  printf("Sum of %d natural numbers = %d\n",n,sum);
  return 0;
}
