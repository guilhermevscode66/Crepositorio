#include<stdio.h>
#include<windows.h>
 struct candidato{
  char voto;
    char nome[20];
    int numero;
}; 
int main(){
struct candidato [] ={
  
{"João da Silva, 1"},
{"Maria da Silva, 2"},
{"Taylor Swift, 3"},
{"Dart Vader, 4"}
};
    struct candidato *candidato;
      for (int i = 0; i < sizeof(candidato) / sizeof(candidatos[0]); i++) {
        //Pede para o usuário entrar com um voto
        
        printf("Escolha um candidato ( entre 1 e 4 %d %c):", candidatos[i].nome);
        candidato[i].voto =getchar();
          candidato[i].voto =getchar();
         candidato[i].voto =getchar();
         candidato[i].voto =getchar();

do{
    printf("Número inválido, porfavor tente outra vez.");
} while (voto < '1' || voto > '4' );
candidato[i] voto - '0.voto++ ;
  printf("Resultado da votação: \n");
        
        printf("%c - %s (%c  voto %d)\n ", candidatos[i].numero, candidatos[i].nome, candidatos[i].voto, );
      }