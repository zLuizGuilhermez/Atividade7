#include <stdio.h>

int main() {

  char sexo, olhos, cabelo;
  int anos, totalCidadao = 0, mulheresEspecificas = 0, contaFinal;
  float salario;

  while (1) {
    printf("Digite o seu sexo (m/f)");
    scanf(" %c", &sexo);

    if (sexo == 'm' || sexo == 'f'){
      if (sexo == 'm') {
        printf(
            "Cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos)?");
        scanf(" %c", &olhos);

        printf("cor dos cabelos (l (loiros), c (castanhos), p (pretos), r "
               "(ruivos))?");
        scanf(" %c", &cabelo);

        printf("Salario:");
        scanf("%f", &salario);

        printf("Idade:");
        scanf("%d", &anos);
        totalCidadao++;
      }
      else if(sexo == 'f') {
        printf(
            "Cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos)?");
        scanf(" %c", &olhos);

        printf("cor dos cabelos (l (loiros), c (castanhos), p (pretos), r "
               "(ruivos))?");
        scanf(" %c", &cabelo);

        printf("Salario:");
        scanf("%f", &salario);

        printf("Idade:");
        scanf("%d", &anos);

        totalCidadao++;
        if (anos == -1) {
          totalCidadao--;
          break;
        }
        if (anos >= 18 && anos <= 35 && olhos == 'c' && cabelo == 'c') {
          mulheresEspecificas++;
        }
      }
    } else {
      printf("\nSexo invalido.");
    }
  }

  if (totalCidadao > 1) {
    contaFinal = (mulheresEspecificas * 100) / totalCidadao;
    printf("A porcentagem e de: %d", contaFinal);
  } else {
    printf("Nenhum abitante");
  }

  return 0;
}
