#include <stdio.h>

int fact(int num);
float exponent(int pow,float number);
float x,ans,i,j,k,l,sum;

void main(){
  printf("cos ");
  scanf("%f",&x);
  x =(x*3.14159)/180;
  sum = 0.00;
  for(i=2;i<21;i=i+2){
    k = i/2;
    l =  (exponent(k,-1.00))*((exponent(i,x))/fact(i));
    sum = sum + l;
    ans = 1.00000 - sum;
    }
  printf("%f",ans);
  
}
int fact(int num){
  if(num == 1 || num == 0)
    return 1;
  else
    return num*fact(num-1);
}
float exponent(int power,float num){
  int j; float product = 1.00;
  for(j=power;j>=0;j--){
    product=product*num;
  }
  return product;
}
  
