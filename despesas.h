#ifndef DESPESAS_H
#define DESPESAS_H

#include "estruturas.h"

void moduloDespesas(Morador vetor[], int *qtd, int max); 

void cadastrarDespesa(Morador vetor[], int *qtd, int max);
void listarDespesas(Morador vetor[], int qtd);

#endif