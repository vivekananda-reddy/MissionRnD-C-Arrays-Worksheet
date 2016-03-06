#include "FunctionHeadersArrays1.h"
#include <stdio.h>
#include<malloc.h>
int main(){

	//Test RemoveArraysDuplicates
	/*
	int arr[3] = { 1, 2, 7 };
	int len = removeArrayDuplicates(arr, 3);
	printf("%d", len);
	*/
	

	//Test Students Count
	/*
	int arr2[3]={1,4,10};
	int *newarray=sortedArrayInsertNumber(arr, 3, 3);
	printf("%d %d %d %d", newarray[0], newarray[1], newarray[2],newarray[3]);
	*/

	int *Arr = (int *)malloc(5 * sizeof(int));
	Arr[0] = 2;
	Arr[1] = 4;
	Arr[2] = 6;
	Arr[3] = 8;
	Arr[4] = 10;
	
	Arr = sortedArrayInsertNumber(Arr, 5, 12);
	return 0;
}