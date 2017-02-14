
/*Program to calculate determinants using gauss elimination technique*/
#include <stdio.h> 

float matrix[3][3] = {2,3,7,4,1,9,2,0,1};
int j,i,d;
void main(){
  /*create a upper triangular matrix*/
  if(matrix[1][0] != 0){
  float temp_mat[3] = {matrix[0][0],matrix[0][1],matrix[0][2]};
  d = matrix[1][0]*temp_mat[0];
  for(i=0;i<3;i++){
      matrix[0][i]=matrix[1][0]*matrix[0][i];
    }
  for(j=0;j<3;j++){
  matrix[1][j] = matrix[1][j]*temp_mat[0];
  }
  
  for(i=0;i<3;i++){
  matrix[1][i]= matrix[1][i]-matrix[0][i];
  }
}

 
  if(matrix[2][0] != 0){
  float temp_mat1[3] = {matrix[0][0],matrix[0][1],matrix[0][2]};
d=d*matrix[2][0]*temp_mat1[0];
 for(j=0;j<3;j++){
  matrix[0][j]=matrix[2][0]*matrix[0][j];
  }
   for(i=0;i<3;i++){
      matrix[2][i]=temp_mat1[0]*matrix[2][i];
    }
  for(i=0;i<3;i++){
  matrix[2][i]= matrix[2][i]-matrix[0][i];
  }
  
} 

   if(matrix[2][1] != 0){
float temp_mat2[3] = {matrix[1][0],matrix[1][1],matrix[1][2]};
d=d*matrix[2][1]*temp_mat2[1];
 for(j=0;j<3;j++){
  matrix[1][j]=matrix[2][1]*matrix[1][j];
  }
   for(i=0;i<3;i++){
      matrix[2][i]=temp_mat2[1]*matrix[2][i];
    }
  for(i=0;i<3;i++){
  matrix[2][i]= matrix[2][i]-matrix[1][i];
  } 
   }
 
/*multiply the diagonals and divide by the scalars used during row transformation viz d*/
for(i=0;i<3;i++)
  for (j=0;j<3;j++){
  printf("%f\n",matrix[i][j]);
}
printf("Det is %f",(matrix[0][0]*matrix[1][1]*matrix[2][2])/d);
}
 
