// REcord breaking data. 
// // [1,2,0,7,2,0,2,2]
//
// // conditions to be noted is that : 
// // the number of visitors on that day is strictly larger than the number 
// // of visitors on each of the previous days.
// // Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors 
// // on the following day.
// // NOTE : every first day could be record breaking days.

#include<stdio.h>
int main(){
  int n;
  printf("Enter the limit of the array: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    printf("Enter element %d: ",i+1);
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n-1;i++){
    int largest=0;
    for(int j=0;j<i;j++){
      if(arr[i]<arr[j]){
        largest=0;
        break;
      }
      else largest=1;
    }
    if(largest==1){
      if(arr[i]<=arr[i+1]) largest=0;
    }
    if(largest==1) printf("%d is the record breaking day.\n",arr[i]);
  }
  for(int i=0;i<n-1;i++){
    if(arr[i]>arr[n-1]) break;
    if(i==n-2) printf("%d is the record breaking day.\n",arr[n-1]);
  }
  return 0;
}
