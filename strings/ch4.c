#include<stdio.h>
#include<string.h>

int main(){
  int A[100];
  int B[100];

  printf("Entrer la premiere chaine:");
  gets(A);
  printf("Entrer la deuxieme chaine:");
  gets(B);

  if(strcmp(A,B)==0){
   printf("Les chaines sont egales\n");
    } else {
        printf("Les chaines sont differentes\n");
    }
  return 0;
}