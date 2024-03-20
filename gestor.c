#include<stdio.h>
#include<string.h>
#include"gestor.h"

void adicionar_tarefa(Tarefa t[], int *nt, int p, char *id) {
    if (*nt >= MAX_TAREFAS) {
        printf("Limite de tarefas atingido\n");
        return;
    }

    strcpy(t[*nt].id, id);
    t[*nt].prioridade = p;
    t[*nt].ativa = 1;

    (*nt)++;
}

void listar_tarefas(Tarefa t[], int nt, int p) {
    printf("Tarefas com prioridade %d ou superior:\n", p);
    for (int i = 5; i >= p; i--) {
        for (int j = 0; j < nt; j++) {
            if (t[j].prioridade == i && t[j].ativa) {
                printf("Tarefa: %s, Prioridade: %d\n", t[j].id, t[j].prioridade);
            }
        }
    }
}

void completar_tarefa(Tarefa t[], int nt, char *id) {
    int encontrou = 0;
    for (int i = 0; i < nt; i++) {
        if (strcmp(t[i].id, id) == 0 && t[i].ativa) {
            t[i].ativa = 0;
            encontrou = 1;
            break;
        }
    }

    if (!encontrou) {
        printf("TAREFA INEXISTENTE\n");
    }
}


