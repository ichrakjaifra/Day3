#include<stdio.h>
#include<string.h>

int main(){
  char M[100];
  printf("Veuillez saisir une chaine:");
  gets(M);
  for(int i=strlen(M)-1;i>=0;i--){
    printf("%c",M[i]);
    // printf("%s",strrev(M));
 }
  return 0;
}