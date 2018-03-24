//
// Created by 87325 on 2018/3/6.
//
#include <stdio.h>
#include <stdlib.h>
#include "List.h"
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, int len){
    int i;
    for(i = 0; i < len ; i++){
        printf("%x", start[i]);
    }
    printf("\n");
}

void show_int(int a){
    byte_pointer p = (byte_pointer)&a;
    show_bytes(p, sizeof(int));
}
int main(void)
{
    List l = create_list();
    printf("%p\n", l);
    printf("%p\n",get_header(l) );
    l->data = 5;
    add(l, 6);
    add(l, 8);
    add(l, 5);
    show(l);
    Position p = find_last(l);
    printf("%d\n", p->data);
    return 0;
}