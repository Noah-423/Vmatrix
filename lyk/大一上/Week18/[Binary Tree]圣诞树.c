//tree.c
#include "tree.h"
Node* init_root(int value){
    Node* newPtr = (Node*)malloc(sizeof(Node));
    newPtr->value = value;
    newPtr->left = NULL;
    newPtr->right = NULL;
    return newPtr;
}

Node* create_node(int value){
    Node* newPtr = (Node*)malloc(sizeof(Node));
    newPtr->value = value;
    newPtr->left = NULL;
    newPtr->right = NULL;
    return newPtr;
}

void insert_node(Node *p, int value){
    if(value < (p->value)){
        if(p->left == NULL){
            Node* newPtr = create_node(value);
            p->left = newPtr;
        }else{
            insert_node(p->left, value);
        }
    }
    if(value > (p->value) ){
        if(p->right == NULL){
            Node* newPtr = create_node(value);
            p->right = newPtr; 
        }else{
            insert_node(p->right, value);
        }
    }
}

void traverse_tree_inorder(Node *p){
    if(p!=NULL){
        traverse_tree_inorder(p->left);
        printf("%d ", p->value);
        traverse_tree_inorder(p->right);
    }
}

void recycle_nodes(Node *p){
    if(p!=NULL){
        recycle_nodes(p->left);
        recycle_nodes(p->right);
        free(p);
    }
}
