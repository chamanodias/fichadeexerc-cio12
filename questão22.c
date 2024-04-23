#include <stdio.h>

int main() {
    char nomeMercadoria[100];
    float valorTotal, valorDesconto, valorAVista;

    printf("Digite o nome da mercadoria: ");
    scanf("%s", nomeMercadoria);
    printf("Digite o valor total da mercadoria: R$");
    scanf("%f", &valorTotal);

    valorDesconto = 0.1 * valorTotal;
    valorAVista = valorTotal - valorDesconto;

    printf("\nNome da mercadoria: %s\n", nomeMercadoria);
    printf("Valor total: R$%.2f\n", valorTotal);
    printf("Valor do desconto (10%%): R$%.2f\n", valorDesconto);
    printf("Valor a ser pago à vista: R$%.2f\n", valorAVista);

    return 0;
}
