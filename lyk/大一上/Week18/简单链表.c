#include"linkedList.h"
#include<stdio.h>
#include<stdlib.h>
//insert the value to the right position
//if the position is not valid, return false
//if insert successfully, return true

bool insert(int position, int value){

    if(position < 0 || position > size ){
        return false;
    }else{
        node* newPtr;//pointer of new node
        node* currentPtr = head;
        node* previousPtr;

        newPtr =(node*) malloc(sizeof(node));// creat new node

        newPtr->value = value;

        for(int i = 0; i < position; i++){
            previousPtr = currentPtr;
            currentPtr = currentPtr->next;
        }

        if(position != 0){
            previousPtr->next = newPtr;
            newPtr->next = currentPtr;
        }else{
            head = newPtr;
            newPtr->next = currentPtr;
        }
    size++;
        return true;
    }   


    
}

// return the value in the given position
int get(int position){
    
    node* currentPtr = head;
    for(int i = 0; i < position; i++){
        currentPtr = currentPtr->next;
    }
    return currentPtr->value; 
}

//clear the linkedlist, remember to free the memory you allocated
void clear(){
    node* previousPtr;
    node* currentPtr = head;
    for(int i = 0; i < size; i++){
        previousPtr = currentPtr;
        currentPtr = currentPtr->next;
        free(previousPtr);//
    }
}

