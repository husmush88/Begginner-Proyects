#include <stdio.h>

float sumar(float a, float b);
float restar(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main() {
    int opcion, repetir;
    float num1, num2, resultado;

    do {
        
        printf("\nCalculadora\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Salir del programa\n");
        
        
        printf("Seleccione una opcion (1-5): ");
        scanf("%d", &opcion);

        
        if (opcion < 1 || opcion > 5) {
            printf("\nOpcion no valida. Intente de nuevo.\n");
            repetir = 1; 
            continue;
        }

        
        if (opcion == 5) {
            printf("\nSaliendo del programa...\n");
            break;
        }

        
        printf("\nIngrese el primer numero: ");
        scanf("%f", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%f", &num2);

        
        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2);
                printf("\nEl resultado de la suma es: %.2f\n", resultado);
                break;

            case 2:
                resultado = restar(num1, num2);
                printf("\nEl resultado de la resta es: %.2f\n", resultado);
                break;

            case 3:
                resultado = multiplicar(num1, num2);
                printf("\nEl resultado de la multiplicacion es: %.2f\n", resultado);
                break;

            case 4:
                
                if (num2 == 0) {
                    printf("\nError: No se puede dividir entre cero.\n");
                } else {
                    resultado = dividir(num1, num2);
                    printf("\nEl resultado de la division es: %.2f\n", resultado);
                }
                break;
        }

        
        do {
            printf("\nDesea realizar otra operacion? (1 : Si / 2 : No): ");
            scanf("%d", &repetir);
            
            if (repetir != 1 && repetir != 2) {
                printf("Opcion no valida. Ingrese 1 para Si o 2 para No.\n");
            }
        } while (repetir != 1 && repetir != 2);

    } while (repetir == 1);

    printf("\nPrograma finalizado.\n");
    return 0;
}



float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}
