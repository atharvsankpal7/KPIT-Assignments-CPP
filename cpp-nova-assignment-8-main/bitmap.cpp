#include <iostream>
#include "bitmap.h"
using namespace std;

template <typename T>
Queue<T>::Queue()
{
    size = 5;
    front = rear = -1;
    arr = new T[size];
}

template <typename T>
Queue<T>::Queue(int s)
{
    size = s;
    front = rear = -1;
    arr = new T[size];
}

template <typename T>
void Queue<T>::insert(T data)
{
    if (isfull())
    {
        throw "Queue Overflow";
    }
    if (front == -1)
        front++;
    arr[++rear] = data;
}

template <typename T>
T Queue<T>::remove()
{
    if (isempty())
    {
        throw "Queue Underflow";
    }
    if (front == rear)
    {
        T temp = arr[front];
        front = rear = -1;
        return temp;
    }
    return arr[front++];
}

template <typename T>
bool Queue<T>::isfull()
{
    return rear == size - 1;
}

template <typename T>
bool Queue<T>::isempty()
{
    return front == -1 && rear == -1;
}
