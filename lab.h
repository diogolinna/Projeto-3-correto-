#ifndef LAB_H
#define LAB_H

#include <stdio.h>

enum Estado {
    NAO_INICIADO,
    EM_ANDAMENTO,
    COMPLETO
};

// Definindo a estrutura Tarefa para representar informações sobre tarefas
struct Tarefa {
    int prioridade;
    char descricao[300];
    char categoria[100];
    enum Estado estado;
};

struct Tarefa {
    int prioridade;
    char descricao[300];
    char categoria[100];
};

// Função para encontrar o comprimento de uma string personalizada
size_t meu_strlen(const char *str);

// Função para remover a quebra de linha de uma string lida com fgets
void removerQuebraLinha(char *str);

// Criando a opção de cadastrar as tarefas
void cadastrarTarefa(FILE *arquivo);

// Criando a opção de listar as tarefas
void listarTarefas(FILE *arquivo);

// Criando a opção de deletar as tarefas
void deletarTarefa(FILE *arquivo);

// Definindo uma função que retorna o nome de um estado com base no valor enum Estado
const char *getNomeEstado(enum Estado estado);

//Função para alterar uma tarefa de um arquivo
void alterarTarefa(FILE *arquivo);

#endif // LAB_H
