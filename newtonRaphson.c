#include <stdio.h>
#include <math.h>

//____Newton Raphson Method gives the solution to any
//trancendental or polynomial function in less number of Iterations
//__Just define the function in f(x) and its derivative in df(x)

// Input Type = Starting Point's x-coordinate
// Output Type = Root's x coordinate (If not found then error message)

float f(float);
float df(float);
float xInt(float,float,float);
//Hard Coding the function

float f(float x){
  return (pow(x,3)-3*x+2);
}

float df(float x){
  return (3*pow(x,2)-3);
}

// Logic of X intercept

float xInt(float x, float y, float dfx){
  return (x - y/dfx);
}



int main(){

  int iter=1;
  int shouldContinue = 1;

  float startVal;
  printf("Enter the starting value ");
  scanf("%f", &startVal);

  float y;
  float der;

  while(shouldContinue){
    y = f(startVal);
    der = df(startVal);

    // Tolerance is set to +-0.0001

	  startVal = xInt(startVal,y,der);
    if(abs(f(startVal))<=0.0001){
      shouldContinue = 0;
      printf("%f",startVal);
    }

    //To prevent infinite loop

    if(iter >= 100000000){
      shouldContinue = 0;
      printf("Failed to find roots");
    }

    iter++;
  }
  return 0;
}
