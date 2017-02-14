#include<stdio.h>
struct value{
  float x[12]; 
  float f_x[12]; 
            };
struct value value = {
 {1.6,1.8,2.0,2.2,2.4,2.6,2.8,3.0,3.2,3.4,3.6,3.8},
   {4.953,6.050,7.389,9.025,11.023,13.464,16.445,20.086,24.533,29.964,36.598,44.701}
            };
void main(){
float a,b,f_a,f_b,result;
int i;
         printf("a: "); scanf("%f",&a);
         printf("b: "); scanf("%f",&b);
          
          

          for (i=0;i<12;i++){
            if( a == value.x[i])
                  f_a = value.f_x[i];
                              }
          for (i=0;i<12;i++){
            if( b == value.x[i])
                  f_b = value.f_x[i];
                             }

       
     result = (b-a)*((f_b - f_a)/2);
     printf("%f\n", result);
}
