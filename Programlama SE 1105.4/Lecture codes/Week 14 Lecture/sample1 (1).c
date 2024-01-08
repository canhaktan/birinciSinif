#include<stdio.h>

int main(){
	int u[10] = {10,20,40,15,16,2,0,8,7,1};
	int *a, i;
	
	a = u;
	for(i = 0; i<10; i++){
		a[i] = a[i] - 8;
		printf("%d\n",a[i]);
	}
	
	printf("The U array:\n");
	
		for(i = 0; i<10; i++){
		printf("%d\n",u[i]);
	}
	
	return 1;
}
