#include<stdio.h>
#include<stdlib.h>

int produit(int a, int b) {
    return a * b;
}

int main() {
    int a = 4;
    int b = 5;
    
    printf("Projet collaboratif\n");
    printf("le produit de %d et %d = %d \n", a, b, produit(a, b));

    return 0;
}
