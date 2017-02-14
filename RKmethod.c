#include <stdio.h>
#define H 0.1
float f (float num1, float num2);
float fuc (float num1, float num2);




float f (float x, float y)
{
  return x + y;
}


float fuc (float x_n, float y_n){
float k_1,k_2,k_3,k_4;

  k_1 = (H / 6) * (f (x_n, y_n));
  k_2 = (H / 6) * (f (x_n + H / 2, y_n + k_1 / 2));
  k_3 = (H / 6) * (f (x_n + H / 2, y_n + k_2 / 2));
  k_4 = (H / 6) * (f (x_n + H, y_n + k_3));
  return y_n + H * (k_1 + 2 * k_2 + 2 * k_3 + k_4);
}




void
main ()
{
  float x;
  float new_y = 1.00;


  for (x = 0.00; x <= 1; x = x + 0.1)
    {
      new_y = new_y + (H / 6) * fuc (x, new_y);
      printf (" %f  %f \n", x, new_y);
    }
}
