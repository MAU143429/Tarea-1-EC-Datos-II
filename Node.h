//
// Created by mau14 on 7/3/21.
//

#ifndef TAREA_1_EC_DATOS_II_NODE_H
#define TAREA_1_EC_DATOS_II_NODE_H

#include<iostream>
#include<stdlib.h>

class Node {
public:
    void* operator new (size_t size);
    void operator delete(void *pointer_memory);
    Node();
    void set_Siguiente(Node *a);
    void set_Dato(int dato);
    Node* get_Siguiente ();
    int get_Dato ();

private:
    Node *next;
    int data;
};

#endif //TAREA_1_EC_DATOS_II_NODE_H
