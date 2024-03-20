#ifndef ORGANIZADOR_H
#define ORGANIZADOR_H

#define MAX_TAREFAS 100
#define MAX_ID_TAREFA 20

typedef struct {
    char id[MAX_ID_TAREFA];
    int prioridade;
    int ativa;
} Tarefa;

void adicionar_tarefa(Tarefa tarefas[], int *num_tarefas, int prioridade, char *id);
void listar_tarefas(Tarefa tarefas[], int num_tarefas, int prioridade);
void completar_tarefa(Tarefa tarefas[], int num_tarefas, char *id);

#endif


