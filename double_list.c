#include <stdio.h>
#include <stdlib.h>

// Nodo al inicio

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void insertBeginning(int data, struct Node** head) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Failed to allocate memory.\n");
        return;
    }
    newNode->data = data;
    newNode->next = *head;
    newNode->prev = NULL;

    if (*head != NULL) {
        (*head)->prev = newNode;
    }

    *head = newNode;
}

void insertEnd(int data, struct Node** head) {
    //
}

int main() {
    struct Node* head = NULL;

    // Añadir nodo al inicio
    insertBeginning(6, &head);

    // Verificar nodo
    if (head != NULL) {
        printf("Informacion en el head del nodo: %d.\n", head->data);
    } else {
        printf("La lista se encuentra vacia.\n");
    }

    // Liberar memoria asignada
    free(head);

    return 0;
}