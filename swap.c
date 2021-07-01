#include<stdio.h>

void swap_max(int arr[],int l,int n){
  int largest = -99999,pos,temp;
  /*for(int i=0;i<l;i++){
    printf("%i\t",arr[i]);
  }
  printf("\n");*/
  for(int i=n;i<l;i++){
    if(largest<arr[i]){
      largest = arr[i];
      pos=i;
    }
  }
  temp = arr[n];
  arr[n] = largest;
  arr[pos] = temp;
}

void ssort(int arr[],int l){
  for(int i=0;i<l;i++){
    swap_max(arr,l,i);
  }
  /* for(int i=0;i<l;i++){
    printf("%i\t",arr[i]);
    }*/
}
