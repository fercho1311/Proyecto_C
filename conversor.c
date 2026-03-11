#include <stdio.h>

int main() {
    int opcion;
    double cantidad;
    
    // Tasas de cambio aproximadas (puedes actualizarlas)
    double GTQ_USD = 0.13;   // 1 Quetzal = 0.13 USD aprox
    double GTQ_EUR = 0.12;   // 1 Quetzal = 0.12 EUR aprox
    double USD_GTQ = 7.70;   // 1 USD = 7.70 GTQ aprox
    double USD_EUR = 0.92;   // 1 USD = 0.92 EUR aprox
    double EUR_GTQ = 8.30;   // 1 EUR = 8.30 GTQ aprox
    double EUR_USD = 1.08;   // 1 EUR = 1.08 USD aprox

    printf("===== CONVERSOR DE MONEDAS =====\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Dolares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dolares\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%lf", &cantidad);

    switch(opcion) {
        case 1:
            printf("Resultado: %.2lf USD\n", cantidad * GTQ_USD);
            break;
        case 2:
            printf("Resultado: %.2lf EUR\n", cantidad * GTQ_EUR);
            break;
        case 3:
            printf("Resultado: %.2lf GTQ\n", cantidad * USD_GTQ);
            break;
        case 4:
            printf("Resultado: %.2lf EUR\n", cantidad * USD_EUR);
            break;
        case 5:
            printf("Resultado: %.2lf GTQ\n", cantidad * EUR_GTQ);
            break;
        case 6:
            printf("Resultado: %.2lf USD\n", cantidad * EUR_USD);
            break;
        default:
            printf("Opcion invalida.\n");
    }

    return 0;
}