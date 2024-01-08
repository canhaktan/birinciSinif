#include <stdio.h>
//..................Function................................
int binaryScr(int a[], int low, int high, int key)
{
	if (high >= low) {
		int mid = low + (high - low) / 2;
		if (*(a+mid)  == key)
			return mid;
		if(*(a+mid)  > key)
			return binaryScr(a, low, mid - 1, key);
		return binaryScr(a, mid + 1, high, key);
	}
	return -1;
}

//...............................................

int main(void)
{
	int a[] = { 12, 13, 21, 36, 40 };
	int i,key; 

	for(i=0;i<5;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");

	int n = sizeof(a) / sizeof(a[0]);
	printf("Enter the number to be searched\n");
	scanf("%d", &key);

	int result = binaryScr(a, 0, n - 1, key);

	if(result == -1) 
	{
		printf("The element is not present in array\n");
	}
	else
	{
		printf("The element is present at index %d\n",result);
	}
	return 0;
}
