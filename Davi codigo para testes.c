#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// breve apresentacao sobre o que � meia vida de um isotopo
int main() {
    
  setlocale(LC_ALL, "Portuguese");
    
  printf("certo, antes de voce me informar os valores que eu vou pedir, vamos "
         "entender, o que � meia vida? Meia-vida, tamb�m conhecida como"
         "per�odo de semidesintegra��o, � o tempo necess�rio para que metade"
         "do n�mero de �tomos do is�topo radioativo presente em uma amostra"
         "desintegre-se.\n normalmente, � realizado uma serie de equa�oes"
         "para conseguirmos...mas vamos simplificar para voce! \n \n");

  // nome da variavel recebera a quantidade de meias vidas que se passaram
  int halflife;

  // recebimento da variavel de meias vidas passadas
  printf("me informe, por gentileza, o numero de meia vida que ja se passaram:");
  scanf("%d", &halflife);

  // calculo da opera��o da quantidade de meia vida restante da amostra
  int restante_porcento = 100 / pow(2, halflife);

  // calculo da operacao da quantidade de meia vida restante da forma de fra��o
  float restante_fracao = 1 / pow(2, halflife);

  // calculo referente a massa do material radioativo que havia na amostra
  float massa = pow(2, halflife) * restante_porcento;

  //exibi�ao dos resultados para o cliente
  printf(
      "a porcentagem d material radiotativo que resta na amostra �: %d %% \n ",restante_porcento);
  printf("a quantidade de material radioativo que resta em fracao � %f ", & restante_fracao);
  printf("a quantidade de massa do material radioativo que estava na amostra: %f ", & massa);
}
