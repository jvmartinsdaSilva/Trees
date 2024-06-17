#include <stdio.h>
#include <stdlib.h>
#include "BiTree.h"

void BiTree::insertValue(int value){
    Node *newNode = (Node *)malloc(sizeof(Node));

    if (this->root == NULL) this->root = newNode;
        
    else {
        Node *aux = this->root;
        Node *parent;

        while (aux != NULL) {
            parent = aux;
            if (value > aux->value) {
                // printf("%d - RIGTH\n", value);
                aux = aux->rigth;
                if (aux == NULL) parent->rigth = newNode;             
            }
            else {
                // printf("%d - LEFT\n", value);
                aux = aux->left;
                if (aux == NULL) parent->left = newNode;            
            }
        }
    }
}
