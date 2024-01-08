//Average of 2D-Array'values 
#include<stdio.h>

double average2d(int A[][3]);

int main()
{
  int A[2][3];
  double result;
  
  printf("Enter the values for 2D array:\n");
  for (int i = 0; i<2 ; i++){
  	for(int j=0; j<3; j++){
  		scanf("%d",&A[i][j]);
	  }
  }
  result = average2d(A);
  printf("The average is %lf\n",result);
  
  return(0);
}

double average2d(int A[][3]){
	int sum = 0;
	double ave;
  for (int i = 0; i<2 ; i++){
  	for(int j=0; j<3; j++){
  		sum = sum + A[i][j];
	  }
  }
  ave = (double)(sum)/(2*3);
  return ave;
}
