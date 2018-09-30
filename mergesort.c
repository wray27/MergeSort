#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void merge(int arr[],int p,int q, int r){
  // assumes arr contains sorted sub-arrays
  int end1 = q - p + 1;
  int end2 = r - q;
  // the final index for each array
  int  left[end1];
  int  right[end2];
  //temp arrays for the data to be copied in to 
  for(int i = 0; i < end1; i++){
    left[i] = arr[p + i];  
  }
  for(int j = 0; j < end2; j++){
    right[j] = arr[q+j+1];  
  }
  //---merging begins here---
  int i = 0; // Initial index of first subarray 
  int j = 0; // Initial index of second subarray 
  int k = p; // Initial index of merged subarray 


  while (i < end1 && j < end2){
      if (left[i] <= right[j]){
        arr[k] = left[i]; 
        i++; 
      } 
      else{
        arr[k] = right[j]; 
        j++; 
      } 
      k++; 
  }

  //Final 2 loops copy whats left into the final array
  while (i < end1){ 
      arr[k] = left[i]; 
      i++; 
      k++; 
  } 
      

  while (j < end2){ 
    arr[k] = right[j]; 
    j++; 
    k++; 
  }



  return;


}

void mergeSort(int arr[], int p, int r){
  //arr[p..r] denotes the sub-array, where p is the beginning index and r is the final
  int q = 0;
  if(p < r){
   //Base Case: p < r
   //in final part of recursion r = q on lhs sub-array 
   //and p = q + 1 on rhs sub-array
   //making p == r on both calls of this function
   	  
	  
   //q denotes the midpoint of the sub-array
   q = (int)floor((p+r)/2);
   
   
   mergeSort(arr,p,q);
   mergeSort(arr,q+1,r);
   merge(arr,p,q,r);
  }


  return;

}

