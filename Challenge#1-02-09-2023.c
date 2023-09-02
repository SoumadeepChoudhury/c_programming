//WAP to find the smallest positive number in an array. Eg: [-4,-2,-7,-1,0,-5,-11,4] Ans: 1
#include<stdio.h>
int main(){
  int n;
  printf("How many numbers you want to enter in the array: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    printf("Enter number %d: ",i+1);
    scanf("%d",&arr[i]);
  }
  int smallest=0;
  int complete=0;
  while(complete==0){
    for(int i=0;i<n;i++){
      if(arr[i]==smallest){
        smallest++;
        complete=0;
      }else complete=1;
    }
  }
  
  printf("%d is the smallest missing number.\n",smallest);
  return 0;
}
