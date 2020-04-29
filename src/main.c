/* Data de submissao:
 * Nome:
 * RA:
 */

#include <stdio.h>
const int tam_buffer=100;

int main() {
  char buffer[tam_buffer];    
  fgets(buffer, tam_buffer, stdin);
<<<<<<< HEAD
  inverter(buffer);
  return 0;
  }
=======
  printf("%s", buffer);
  return 0;
}
>>>>>>> parent of 33866ee... Função inverter criada e testada
