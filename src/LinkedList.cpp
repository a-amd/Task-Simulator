#include <LinkedList.h>

template class LinkedList<int>;

template <typename T>
LinkedList<T>::LinkedList()
{
    head = tail = nullptr;

    count = 0;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    Node<T> *current = nullptr;

    while (!isEmpty())
    {
        current = head->next;
        delete head;
        head = current;
    }

    head = tail = nullptr;

    count = 0;
}

template <typename T>
void LinkedList<T>::addFront(T value)
{
    Node<int> *node = new Node<int>();
    node->value = value;
    node->next = head;

    head = node;

    if (!tail)
        tail = head;

    count++;
}

template <typename T>
void LinkedList<T>::addEnd(T value)
{
    Node<T> *node = new Node<T>();
    node->value = value;
    node->next = nullptr;

    if (tail)
    {
        tail->next = node;
        tail = tail->next;
    }
    else
    {
        head = tail = node;
    }

    count++;
}

template <typename T>
T LinkedList<T>::deleteFront()
{
    T value = head->value;

    Node<T> *tmp = head;

    if (isEmpty())
    {
        throw Underflow();
    }
    else if (head == tail)
    {
        head = tail = nullptr;
    }
    else
    {
        head = head->next;
    }

    count--;
    delete tmp;
    return value;
}

template <typename T>
T LinkedList<T>::deleteEnd()
{
    T value = tail->value;
    if (head == tail)
    {
        delete head;
        head = tail = nullptr;
    }
    else
    {
        Node<T> *tmp = new Node<T>();
        for (tmp = head; tmp->next != tail; tmp = tmp->next)
            ;
        delete tail;
        tail = tmp;
        tail->next = nullptr;
    }

    count--;
    return value;
}

template <typename T>
void LinkedList<T>::insertInOrder(T value)
{
    Node<T> *node = new Node<T>();
    node->value = value;
    node->next = nullptr;

    if (!head || head->value >= node->value)
    {
        node->next = head;
        head = node;
    }
    else
    {
        Node<T> *current = head;

        while (current->next && current->value < node->value)
        {
            current = current->next;
        }

        node->next = current->next;
        current->next = node;
    }

    count++;
}

template <typename T>
void LinkedList<T>::subtract(T value)
{
    Node<T> *current = head;

    while (current)
    {
        current->value = current->value - value;
        current = current->next;
    }
}

template <typename T>
bool LinkedList<T>::isEmpty()
{
    return head == nullptr;
}

template <typename T>
int LinkedList<T>::getSize()
{
    return count;
}