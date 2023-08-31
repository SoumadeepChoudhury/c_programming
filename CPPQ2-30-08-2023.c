//Write a C Program to Check Whether a Number is Prime or Not.
#include<stdio.h>
int main(){
  int num,count=0;
  printf("Enter a integer number: ");
  scanf("%d",&num);
  for(int i=1;i<=num/2;i++){
    if(num%i==0){
      count++;
    }
  }
  if(count==1){
    printf("%d is a prime number.",num);
  }else{
    printf("%d is not a prime number.",num);
  }
  return 0;
}
