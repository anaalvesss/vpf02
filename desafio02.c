#include<stdio.h>

struct cliente {
    char nome[50];
    int idade;
    char sexo;
};
int main() {
    struct cliente clientes[7] = {
        {"Sara de Paula", 30, 'F'},
        {"Beatriz Alves", 25, 'F'},
        {"Pedro Silva", 35, 'M'},
        {"Samyra Ferreira", 28, 'F'},
        {"Letícia Souza", 40, 'F'},
        {"Ana Lima", 40, 'F'},
        {"Vitória Silva", 40, 'F'}
    };
    FILE *arquivo = fopen("clientes.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "Nome, Idade, Sexo\n");

    for (int i = 0; i < 7; i++) {
        fprintf(arquivo, "%s,%d,%c\n",
                clientes[i].nome,
                clientes[i].idade,
                clientes[i].sexo);
    }

    fclose(arquivo);
    printf("Arquivo criado com sucesso.\n");
	getch();
}
