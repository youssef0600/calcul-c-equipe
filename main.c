#include<stdio.h>
#include<stdlib.h>

int produit(int a, int b) {
    return a * b;
}

float moyenne(int a, int b) {
    return (a + b) / 2.0;
}

int main() {
    int a = 4;
    int b = 5;
    
    printf("Bienvenue dans le projet collaboratif\n");
    printf("le produit de %d et %d = %d \n", a, b, produit(a, b));
    printf("la moyenne = %.2f\n", moyenne(a, b));

    return 0;
}
