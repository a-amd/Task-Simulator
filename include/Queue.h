#pragma once

#include <LinkedList.h>
#include <Node.h>

template <typename T>
class Queue
{
public:
    Queue();
    ~Queue();

    void enqueue(T);
    T dequeue();

    int getSize();
    bool isEmpty();

private:
    LinkedList<T> *ll;
};