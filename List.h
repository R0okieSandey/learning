//
// Created by 87325 on 2018/3/23.
//

#ifndef DATASTRUCT_LIST_H
#define DATASTRUCT_LIS_H
struct Node{
    int data;
    struct Node* next;
    struct Node* current;
};
typedef struct Node* PtrToNode;
typedef  PtrToNode List;
typedef PtrToNode Position;
Position get_header(List l);
List create_list();
int is_empty(List l);
void add(List l , int data);
List  position(List l);
void show(List l);
Position find_previous(List l, Position p);
Position find_last(List l);
void test();
#endif //DATASTRUCT_LIST_H
