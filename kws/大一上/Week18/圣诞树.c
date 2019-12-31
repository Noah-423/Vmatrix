#include "tree.h"
Node* init_root(int value){
	Node* root;
	root=(Node*)malloc(sizeof(Node));
	root->value=value;
	root->left=NULL;
	root->right=NULL;
	return root;
}
	
Node* create_node(int value);
void insert_node(Node *p, int value){
	if(value<(p->value)){
		if((p->left)==NULL){
			p->left=(Node*)malloc(sizeof(Node));
			(p->left)->value=value;
			(p->left)->left=NULL;
			(p->left)->right=NULL;
		}
		else{
			insert_node(p->left,value); 
		}
	}
	else{
		if((p->right)==NULL){
			p->right=(Node*)malloc(sizeof(Node));
			(p->right)->value=value;
			(p->right)->left=NULL;
			(p->right)->right=NULL;
		}
		else{
			insert_node(p->right,value);
		}
	}
}
	
void traverse_tree_inorder(Node *p){
	if (p != NULL){
        traverse_tree_inorder(p->left);
        printf("%d ",p->value);          
        traverse_tree_inorder(p->right);}
        
}
void recycle_nodes(Node *p){
	if (p != NULL){
        recycle_nodes(p->left);
        recycle_nodes(p->right);
        free(p);            //  visit泛指要对节点进行的操作
    }
}
