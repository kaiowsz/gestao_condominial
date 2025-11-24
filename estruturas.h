#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int is_ativo;
    char cpf[15];
    char nome_sobrenome[105];
    char telefone[20];
} Morador;

typedef struct {
    double metragem;
    int vagas_garagem;
    char bloco_apartamento[10];
    char id_morador[15];
} Apartamento;

typedef struct {
    float valor;
    Data data_referencia;
    Data data_vencimento;
    int is_pago;
    char tipo_conta[32];
    char id_apartamento[12];
} Despesa;

#endif