//Write C Program to Check Armstrong Number.
#include <stdio.h>
int main(){
  int num,sum;
  printf("Enter number: ");
  scanf("%d",&num);
  int n=num;
  sum=0;
  while(n!=0){
    int d=n%10;
    sum+=d*d*d;
    n/=10;
  }
  if(sum==num) printf("%d is Armstrong number.",num);
  else printf("%d is not an Armstrong number.",num);
  return 0;
}
