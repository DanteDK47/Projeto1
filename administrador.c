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
printf("Investidor não encontrado.\n");
}

void cadastrarCriptomoeda(Administrador *adm) {
    if (adm->numCriptomoedas >= MAX_CRIPTOMOEDAS) {
        printf("Limite de criptomoedas atingido.\n");
        return;
    }
    Criptomoeda nova;
    printf("Nome da criptomoeda: ");
    scanf("%s", nova.nome);
    printf("Cotação inicial: ");
    scanf("%lf", &nova.cotacaoInicial);
    printf("Taxa de compra (%): ");
    scanf("%lf", &nova.taxaCompra);
    printf("Taxa de venda (%): ");
    scanf("%lf", &nova.taxaVenda);

    adm->criptomoedas[adm->numCriptomoedas++] = nova;
    printf("Criptomoeda cadastrada com sucesso!\n");
}

void excluirCriptomoeda(Administrador *adm) {
    char nome[50];
    printf("Nome da criptomoeda a excluir: ");
    scanf("%s", nome);

    for (int i = 0; i < adm->numCriptomoedas; i++) {
        if (strcmp(adm->criptomoedas[i].nome, nome) == 0) {
            for (int j = i; j < adm->numCriptomoedas - 1; j++) {
                adm->criptomoedas[j] = adm->criptomoedas[j + 1];
            }
            adm->numCriptomoedas--;
            printf("Criptomoeda excluída com sucesso!\n");
            return;
        }
    }
    printf("Criptomoeda não encontrada.\n");
}

void atualizarCotacoes(Administrador *adm) {
    srand(time(0));
    for (int i = 0; i < adm->numCriptomoedas; i++) {
        double variacao = ((rand() % 21) - 10) / 100.0;
        adm->criptomoedas[i].cotacaoInicial += adm->criptomoedas[i].cotacaoInicial * variacao;
    }
    printf("Cotações atualizadas com sucesso!\n");
}

void menuAdministrador(Administrador *adm) {
    int opcao;
    do {
        printf("\nMenu do Administrador\n");
        printf("1. Cadastrar Investidor\n");
        printf("2. Excluir Investidor\n");
        printf("3. Cadastrar Criptomoeda\n");
        printf("4. Excluir Criptomoeda\n");
        printf("5. Atualizar Cotações\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarInvestidor(adm); break;
            case 2: excluirInvestidor(adm); break;
            case 3: cadastrarCriptomoeda(adm); break;
            case 4: excluirCriptomoeda(adm); break;
            case 5: atualizarCotacoes(adm); break;
            case 6: printf("Saindo...\n"); break;
            default: printf("Opção inválida.\n");
        }
    } while (opcao != 6);
}

int main() {
    Administrador administrador = { .numInvestidores = 0, .numCriptomoedas = 0 };
    char cpf[12], senha[20];

    printf("Login do Administrador\n");
    printf("CPF: ");
    scanf("%s", cpf);
    printf("Senha: ");
    scanf("%s", senha);

    if (loginAdministrador(cpf, senha)) {
        menuAdministrador(&administrador);
    } else {
        printf("Login inválido.\n");
    }

    return 0;
}
