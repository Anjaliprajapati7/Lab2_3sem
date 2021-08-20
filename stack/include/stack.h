#pragma once
#include <iostream>
#define MAX 10
using namespace std;
template <class T>
class Stack
{

    virtual void push(T x)=0;
    virtual T pop()=0;
    virtual T peek()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
};

template <class T>
class StackImplementation : public Stack<T>
{

public:
    int top;
    T a[MAX];
    StackImplementation() { top = -1; }

    void push(T x)
    {
        if (isFull())
        {
            cout << "Stack Overflow";
        }
        else
        {
            a[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow";
        }
        else
        {
            T x = a[top--];
            return x;
        }
    }
    T peek()
    {
        if (!isEmpty())
        {
            T x = a[top];
            return x;
        }
        else
        {
            cout << "Stack is Empty";
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == MAX - 1;
    }
};