#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USUARIOS 100
#define MAX_CRIPTOMOEDAS 10

typedef struct {
    char nome[50];
    double cotacaoInicial;
    double taxaCompra;
    double taxaVenda;
} Criptomoeda;

typedef struct {
    char cpf[12];
    char senha[20];
    double saldoReais;
} Investidor;

typedef struct {
    Investidor investidores[MAX_USUARIOS];
    Criptomoeda criptomoedas[MAX_CRIPTOMOEDAS];
    int numInvestidores;
    int numCriptomoedas;
} Administrador;

// Funções do administrador
int loginAdministrador(char cpf[], char senha[]) {
    return strcmp(cpf, "admin") == 0 && strcmp(senha, "admin123") == 0;
}

void cadastrarInvestidor(Administrador *adm) {
    if (adm->numInvestidores >= MAX_USUARIOS) {
        printf("Limite de investidores atingido.\n");
        return;
    }
    Investidor novo;
    printf("CPF do investidor: ");
    scanf("%s", novo.cpf);
    printf("Senha do investidor: ");
    scanf("%s", novo.senha);
    printf("Saldo inicial em reais: ");
    scanf("%lf", &novo.saldoReais);

    adm->investidores[adm->numInvestidores++] = novo;
    printf("Investidor cadastrado com sucesso!\n");
}

void excluirInvestidor(Administrador *adm) {
    char cpf[12];
    printf("CPF do investidor a excluir: ");
    scanf("%s", cpf);

    for (int i = 0; i < adm->numInvestidores; i++) {
        if (strcmp(adm->investidores[i].cpf, cpf) == 0) {
            for (int j = i; j < adm->numInvestidores - 1; j++) {
                adm->investidores[j] = adm->investidores[j + 1];
            }
            adm->numInvestidores--;
            printf("Investidor excluído com sucesso!\n");
            return;
        }
    }
