#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    if (idade >= 5 && idade <= 7) {
        printf("\nCategoria: Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        printf("\nCategoria: Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        printf("\nCategoria: Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        printf("\nCategoria: Juvenil B");
    } else if (idade >= 18) {
        printf("\nCategoria: Adulto");
    } else {
        printf("\nIdade fora das categorias classificadas");
    }
    
    return 0;
}
