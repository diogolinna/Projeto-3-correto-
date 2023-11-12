#include <stdio.h>
#include "lab.h"
int main() {
    FILE *arquivo;
    arquivo = fopen("tarefas.dat", "ab+");
    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo de tarefas");
        return 1;
    }

    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Deletar Tarefa\n");
        printf("4. Alterar Tarefa\n");
        printf("5. Filtrar por Prioridade\n");
        printf("6. Filtrar por Estado\n");
        printf("7. Filtrar por Categoria\n");
        printf("8. Filtrar por Prioridade e Categoria\n");
        printf("9. Sair\n");

        switch (opcao) {
            case 1:
                cadastrarTarefa(arquivo);
                break;
            case 2:
                listarTarefas(arquivo);
                break;
            case 3:
                deletarTarefa(arquivo);
                break;
            case 4:
                alterarTarefa(arquivo);
                break;
            case 5:
                filtrarPorPrioridade(arquivo);
                break;
            case 6:
                filtrarPorEstado(arquivo);
                break;
            case 7:
                filtrarPorCategoria(arquivo);
                break;
            case 8:
                filtrarPorPrioridadeECategoria(arquivo);
                break;
            case 9:
                exportarPorPrioridade(arquivo);
                break;
            case 10:
                printf("Saindo do programa. Obrigado!\n");
                break; // Adiciona a opção de sair
            default:
                printf("Opção invalida. Tente novamente.\n");
        }
    } while (opcao != 10); // Ajusta a condição para incluir a opção de sair

    fclose(arquivo);

    return 0;
}
