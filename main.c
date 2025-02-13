#include<stdio.h>
#include<stdlib.h>

int main(){
  int *ptr;
  ptr = (int *) malloc(sizeof(ptr));

  if (ptr == NULL){
    printf("Memory not allocated correctly, overflow ERROR \n");
  }

  *ptr = 1000;
  printf("%d \n", *ptr);
  free(ptr);

  return 0;
}

/* NOTES:
  Upload #1: Main Upload.
  Upload #1.5: Fixed typo & file extension.
*/