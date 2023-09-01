//Write a C Program for Area And Perimeter Of Rectangle.
#include<stdio.h>
int main(){
  float length,width;
  printf("Enter Length of Rectangle: ");
  scanf("%f",&length);
  printf("Enter Width of Rectangle: ");
  scanf("%f",&width);
  float area=length*width;
  float perimeter=2*(length+width);
  printf("Area of rectangle: %f\nPerimeter of Reactangle: %f\n",area,perimeter);
  return 0;
}
