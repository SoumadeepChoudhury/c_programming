//Write a C Program to Print Prime Numbers From 1 to N.
#include<stdio.h>
int main(){
  int n;
  printf("Enter the max limit 'n': ");
  scanf("%d",&n);
  for(int i=2;i<=n;i++){
    int count=0;
    for(int j=1;j<=i/2;j++){
      if(i%j==0){
        count++;
      }
    }
    if(count==1){
      printf("%d ",i);
    }
  }
  return 0;
}
