/* Data de submissao: 17/03/20
 * Nome: João Pedro Martins Ferreira
 * RA: 218762
 */

#include <stdio.h>
#include <string.h>

const int tam_buffer=100; // determina o tamanho máximo da frase a ser lida
int tamanho; // variável para saber o tamanho da frase
int i; // variável que percorerá a frase
int k = 0; // variável das posições de espaço:' ', inicializada em 0


char *inverter(char *frase){ // função inversor de palavras
  tamanho = strlen(frase); // determina o tamanho da frase
  char inv[tamanho]; // vetor que armazenará os caracteres invertidos
  for (i=0;(i<tamanho);i++){ // percorerá toda a frase
    if (frase[i] == ' '){ // condição espaço:' '. Se houver espaço, iverte os caracteres entre k e o espaço:' '
      int dec = i-1; // variável que percorre do espaço posterior até o inferior
      int l = k; // define l como a posição posterior ao primeiro espaço
      for(dec;dec>=k;dec--){
        inv[l] = frase[dec]; // coloca os caracteres da frase, na posição invertida
        l++;
      }
      inv[i] = frase[i]; // coloca o espaço na sua posição, pois este não se altera
      k = i+1; // atualiza a posiçao dos próximos caracteres válidos
    }
    else if(i == tamanho-1){ // condição final frase. Se for o final da frase, iverte os caracteres entre k e o último caracter válido
      int dec = i-1;
      int l = k;
      for(dec;dec>=k;dec--){
        inv[l] = frase[dec];
        l++;
      }
      inv[i]= '\n'; // força quebra de linha como último caracter
    }
  }
  printf("%s",inv); // printa a frase invertida
}

int main() {
  char buffer[tam_buffer];
  fgets(buffer, tam_buffer, stdin);
  inverter(buffer);
  }
