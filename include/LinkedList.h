#pragma once

#include <Node.h>

template <typename T>
class LinkedList
{
public:
    LinkedList();
    ~LinkedList();

    void addFront(T);
    void addEnd(T);

    T deleteFront();
    T deleteEnd();

    void insertInOrder(T);
    void subtract(T);

    bool isEmpty();
    int getSize();

private:
    Node<T> *head, *tail;
    int count;

    class Underflow
    {
    };
};