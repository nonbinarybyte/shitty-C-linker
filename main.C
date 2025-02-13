#include<stdio.h>
#include<stdlib.h>

int main(){
  int *ptr;
  ptr = (int *) malloc(sizeof(ptr));

  if (ptr == NULL){
    printf("Memory not allocated correctly, overflow ERRROR \n");
    return 1;
  }

  *ptr = 1000;
  printf("%d \n", *ptr);
  free(ptr);

  return 0;
}