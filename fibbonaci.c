#include <stdio.h>

int fibonacci(int);

int fibonacci(int x){
  if(x==1||x==2){
    return 1; 
  }
  else{
    return fibonacci(x-1) + fibonacci(x-2);
  }
}

int main()
{
  int s = 0;
  int i;
  for(i=1;i<20;i++){
    s += fibonacci(i);
  }
 
  printf("\nSum of fibonacci sequence upto 20 is %d\n",s);
  return 0;

}

