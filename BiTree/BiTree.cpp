#include <stdio.h>
#include <stdlib.h>
#include "BiTree.h"

void BiTree::insertValue(int value){
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->rigth = NULL;

    if (root == NULL) {
        this->root = newNode;
        return;
    }

    Node * aux = root;
    Node * parent;

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

void BiTree::searchValue(int value){
    Node * aux = root;
    while(aux != NULL){
        if(value == aux->value) {
            printf("Valor %d encontrado\n", value);
            break;
        }
        else if(value > aux->value) aux = aux->rigth;
        else if (value < aux-> value) aux = aux->left;
    }

    if(aux == NULL) printf("Valor não encotrado na Árvore\n");
}