//Write a C Program to Print Fibonacci Series.
#include <stdio.h>
int main(){
  // 0,1,1,2,3,5,8
  int n;
  printf("Enter the number of terms: ");
  scanf("%d",&n);
  int a,b,c;
  a=0;
  b=1;
  printf("%d, %d, ",a,b);
  for(int i=0;i<n-2;i++){
    c=a+b;
    printf("%d, ",c);
    a=b;
    b=c;
  }
  return 0;
}
