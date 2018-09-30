#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

void printArray(int* arr,int len){

  for(int i = 0; i < len; i ++){
	 printf("%d,",arr[i]);
  } 
 
  printf("\n");


}

int main(){
  
  int len = 8;
  int numbers[8] = {7,11,3,9,4,8,12,1};
 

  printf("Unsorted:\n");
  printArray(numbers,len);
  mergeSort(numbers,0,7);
  printf("Sorted:\n");
  printArray(numbers,len);

       
  return 0;
}
