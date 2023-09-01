//Write a C Program to Find Simple Interest.
#include<stdio.h>
int main(){
  float pamt,rate,time;
  printf("Enter Principal Amount: ");
  scanf("%f",&pamt);
  printf("Enter Rate of interest: ");
  scanf("%f",&rate);
  printf("Enter time in years: ");
  scanf("%f",&time);
  float interest=pamt*rate*time/100;
  printf("Interest amount: %f\n",interest);
  return 0;
}
