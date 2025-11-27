#include <stdio.h>
#include <stdlib.h>
#include "estruturas.h"

#include "moradores.h"
#include "apartamentos.h"
#include "despesas.h"

#define MAX 5

int main () {
    Morador moradores[MAX];
    Apartamento apartamentos[MAX];
    Despesa despesas[MAX];

    int qtdMoradores = 0, 
    qtdApartamentos = 0, 
    qtdDespesas = 0;

    int opcao;
    do {

        // Cada opção leva a um sub-menu específico.
        printf("--- Gestao Condominial ---\n");
        printf("1. Gestao de Moradores\n");
        printf("2. Gestao de Apartamentos\n");
        printf("3. Gestao de Despesas\n");
        printf("4. Relatorios\n");
        printf("0. Sair\n");
        printf(">> ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Em breve\n");
                // moduloMoradores(moradores, &qtdMoradores, MAX);
                break;
            case 2:
                printf("Em breve\n");
                // moduloApartamentos();
                break;
            case 3:
                printf("Em breve\n");
                // moduloDespesas();
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
        

    } while(opcao != 0);

    return 0;
}