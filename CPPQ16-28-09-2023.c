//Write C Program to Find LCM of Two Numbers
#include <stdio.h>
int main(){
  int num1,num2,lcm;
  lcm=1;
  printf("Enter number 1: ");
  scanf("%d",&num1);
  printf("Enter number 2: ");
  scanf("%d",&num2);
  int n1=num1;
  int n2=num2;
  while(1){
    int end=1;
    if(n1>n2){
       n1=n1+n2;
       n2=n1-n2;
       n1=n1-n2;
    }
    for(int i=1;i<=n1;i++){
      if(n1%i==0 && n2%i==0){
        lcm*=i;
        n1=n1/i;
        n2=n2/i;
      }
      else if(i==n1) end=1;
    }
    if(end==1) break;
  }
  printf("LCM of %d and %d is %d.\n",num1,num2,lcm*n1*n2);
  return 0;
}
