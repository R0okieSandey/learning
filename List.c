//
// Created by 87325 on 2018/3/23.
//
#include "List.h"
#include <stdio.h>
#include <stdlib.h>
void test(){
    printf("cffds");
}
List create_list(void){
    List l = (List)malloc(sizeof(struct Node));
    l->next = NULL;
    l->current = l;
    return l;

}

Position get_header(List l){
    return l;
}

int is_empty(List l){
    return l->next == NULL;
}
void add(List l, int data){
    List new_node = (List)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    l->current->next = new_node;
    l->current = new_node;
}

List position(List l){
    Position p = l;
    while (p->next != NULL){
        p = p->next;
    }
    return p;
}
void show(List l){
    Position p = l->next;
    while (p != NULL){
        printf("%d\n", p->data);
        p = p->next;
    }
}
Position find_last(List l){
    Position p = l;
    while(p->next != NULL)
        p = p->next;
    return p;
}
Position find_previous(List l, Position p){
    Position tmp = l;
    while (tmp->next != p)
        tmp = tmp->next;
    return p;
}