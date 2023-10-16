#include<stdio.h>

int main()
{
    int numero;
    int i;
    int sumatoria = 0; 

    printf(" SUMA DE GAUSS\n");
    printf("Escriba el numero para realizar la suma de Gauss:\n");
    scanf("%d", &numero);
    printf("Su numero es: %d\n",numero);

    for (int i = 1; i <= numero ; i++);
    {
        printf("Prueba de ver los numeros que se imprimen: %d\n", i);
        //sumatoria = sumatoria + i;
        //printf("\nLos numeros de la sumatoria son: %d",sumatoria);

      
    }
    return 0; 

}
