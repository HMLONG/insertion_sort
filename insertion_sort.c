#include <stdio.h>
void insertion_sort(int *A,int size){
  for(int j=1;j<=size-1;j++){
    int key=A[j];
    int i=j-1;
    while(i>-1&&A[i]>key){
      A[i+1]=A[i];
      i--;
    }
    A[i+1]=key;
  }
}
void printArray(int* A,int size){
  for(int i=0;i<size;i++)
    printf("%d ",A[i]);
  printf("\n");
}
void main(){
  int A[8]={3,8,5,6,4,7,7,16};
  printArray(A,8);
  insertion_sort(A,8);
  printArray(A,8);
}
