//1. Given an array arr[] of size N. The task is to find the first repeating element in the array of integres. i.e an
////element that occurs more than once and whose index of the first occurence is smallest.
///// E.g : [1,5,3,4,3,5,6]
/////  output : 2               (FACEBOOK , AMAZON )

#include<stdio.h>
int main(){
  int n;
  printf("Enter the maximum number of entries you want: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
  }
  int found=0;
  for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
       if(arr[i]==arr[j]){
         printf("%d is the first repeating element's position.",i+1);
         found=1;
         break;
        }
      }
     if(found==1) break;
    }

  return 0;
}
