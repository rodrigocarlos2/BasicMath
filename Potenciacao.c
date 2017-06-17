
#include <stdio.h>
#include <string.h>
#include <math.h>

int pot(int base, int expoente){
    
    if(expoente<=1){
        return base;
    }
    else{
        return base*pot(base, expoente-1);
    }
    
}

int main(){
    
    // Inputs
    int base;
    int expoente;
    
    // Output
    int resultado;
    
    printf("Write the base:\n");
    scanf("%d", &base);
    
    printf("Write the expoente: \n");
    scanf("%d", &expoente);
    
    resultado = pot(base, expoente);
    
    printf("The result is: %d.\n", resultado);

    return 0;
    
}

