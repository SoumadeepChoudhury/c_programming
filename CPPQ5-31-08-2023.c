//Write a C Program to Calculate Fahrenheit to Celsius.
#include<stdio.h>
int main(){
  float fahrenheit;
  printf("Enter temperature in Fahrenheit: ");
  scanf("%f",&fahrenheit);
  float celcius=5*(fahrenheit-32)/9;
  printf("%f F = %f\n",fahrenheit,celcius);
  return 0;
}
