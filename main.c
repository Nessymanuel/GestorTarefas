#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "gestor.h"

int main() {
    Tarefa tarefas[MAX_TAREFAS];
    int num_tarefas = 0;
    char comando[10];
    int prioridade;
    char id[MAX_ID_TAREFA];

    while (1) {
        printf("\nComando: ");
        scanf("%s", comando);

        if (strcmp(comando, "new") == 0) {
            scanf("%d %s", &prioridade, id);
            adicionar_tarefa(tarefas, &num_tarefas, prioridade, id);
        } else if (strcmp(comando, "list") == 0) {
            scanf("%d", &prioridade);
            listar_tarefas(tarefas, num_tarefas, prioridade);
        } else if (strcmp(comando, "complete") == 0) {
            scanf("%s", id);
            completar_tarefa(tarefas, num_tarefas, id);
        } else {
            printf("Comando inv�lido\n");
        }
    }

    return 0;
}

