#include<stdio.h>
#include<math.h>

typedef struct im{
  float real;
  float imag;
}complex;

complex rootPositive(float,float,float);
complex rootNegative(float,float,float);

complex rootPositive(float a,float b,float c){
  float num;
  float test;
  complex cm1;

  test = pow(b,2) - 4*a*c;
  if(test>=0){
    num = -1*b + sqrt(test);
    cm1.real = num/(2*a);
    cm1.imag = 0;
  }
  else{
    cm1.real = (-1*b)/(2*a);
    cm1.imag = (sqrt(-1*test))/(2*a);
  }
  return cm1;
}

complex rootNegative(float a,float b,float c){
  float num;
  float test;
  complex cm2;

  test = pow(b,2) - 4*a*c;
  if(test>=0){
    num = -1*b - sqrt(test);
    cm2.real = num/(2*a);
    cm2.imag = 0;
  }
  else{
    cm2.real = (-1*b)/(2*a);
    cm2.imag = (sqrt(-1*test))/(2*a);
  }
  return cm2;
}

int main(){
  float a,b,c;
  complex cm1,cm2;

  printf("\nThis is the generalized root finder for the equation ax^2 + bx + c = 0");
  printf("\nEnter the values of a,b,c leaving a space in between each of them \n");
  scanf("%f %f %f",&a,&b,&c);
  cm1 = rootPositive(a,b,c);
  cm2 = rootNegative(a,b,c);

  if(cm1.imag == 0){
    printf("\nRoot 1: %f",cm1.real);
    printf("\nRoot 2: %f",cm2.real);
  }
  else{
    printf("\nRoot 1: %f + %f i",cm1.real, cm1.imag);
    printf("\nRoot 1: %f - %f i",cm2.real, cm2.imag);
  }
  return 0;
}
