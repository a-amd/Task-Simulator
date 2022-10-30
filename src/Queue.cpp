#include <Queue.h>

template class Queue<int>;

template <typename T>
Queue<T>::Queue() { ll = new LinkedList<T>(); }

template <typename T>
Queue<T>::~Queue()
{
    delete ll;
    ll = nullptr;
}

template <typename T>
bool Queue<T>::isEmpty() { return ll->isEmpty(); }

template <typename T>
void Queue<T>::enqueue(T value)
{
    ll->addEnd(value);
}

template <typename T>
T Queue<T>::dequeue()
{
    return ll->deleteFront();
}

template <typename T>
int Queue<T>::getSize() { return ll->getSize(); }