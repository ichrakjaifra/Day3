#include<stdio.h>
#include<string.h>

int main (){
  char C[100];
  char S;
  int i,cpt=0;
  int taille;
  printf("Veauiller saisire une chaine:");
  gets(C);
  printf("Veuillez saisir une caractere:");
  scanf("%c",&S);
  taille=strlen(C);
  for(i=0;i<taille;i++){
  if(C[i]==S){
    cpt++;
  }
  }
  printf("La fois de caractere %c apparait %d dans chaine",S,cpt);
  return 0;
}