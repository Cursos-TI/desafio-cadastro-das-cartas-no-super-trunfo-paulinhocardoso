#include <stdio.h>

int main(){
    int codigo, número, PIB;
    float população,área;
    char nome[70];

  printf("Digite o codigo da cidade");
    scanf("%d" , &codigo);

      printf("Digite o número de pontos turisticos\n");
    scanf("%d" , &número);

    printf("Digite o PIB");
    scanf("%d" , &PIB);

       printf("Digite a população");
    scanf("%d" , &população);

       printf("Digite a área");
    scanf("%d" , &área);

    printf("Digite seu Nome");
    scanf("%s" , &nome);

    printf("população: %s - área: %d\n - nome: %s ", população , área ,nome);
    printf("codigo da cidade: %d\n - número de pontos turisticos: %f\n  PIB: %d\n ", codigo, número ,PIB);

    return 0;

}