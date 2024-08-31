#include <iostream>
#include "bitmap.h"
using namespace std;

template <typename T>
Stack<T>::Stack()
{
    size = 5;
    top = -1;
    arr = new int[size];
}

template <typename T>
Stack<T>::Stack(int s)
{
    size = s;
    top = -1;
    arr = new int[size];
}

template <typename T>
void Stack<T>::push(T data)
{
    if (isfull())
    {
        throw "Stack overflow";
    }
    else
    {
        arr[++top] = data;
    }
}

template <typename T>
T Stack<T>::pop()
{
    if (isempty())
    {
        throw "Stack underflow";
    }
    return arr[top--];
}

template <typename T>
T Stack<T>::peep()
{
    return arr[top];
}

template <typename T>
bool Stack<T>::isfull()
{
    return top == size - 1;
}

template <typename T>
bool Stack<T>::isempty()
{
    return top == -1;
}
