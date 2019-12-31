#include "linkedList.h"
#include <stdlib.h>
bool insert(int position, int value){
	node* cur;
	node* pre;
	node* add;
	add=(node*)malloc(sizeof(node));
	add->value=value;
	pre=NULL;
	cur=head;
	while(position&&cur!=NULL){
		pre=cur;
		cur=cur->next;
		position--;
	}
	if(position!=0){
        free(add);
        return false;
    }
	if(pre==NULL){
		add->next=head;
		head=add;
		size++;
		return true;
	}
	else{
		pre->next=add;
		add->next=cur;
		size++;
		return true;
	}
} 
int get(int position){
	node* cur;
	cur=head;
	while(position--){
		cur=cur->next;
	}
	return cur->value;
}
void clear(){
	node* cur;
	node* pre;
	cur=head;
	while(cur!=NULL){
		pre=cur;
		cur=cur->next;
        free(pre);
	}
}
