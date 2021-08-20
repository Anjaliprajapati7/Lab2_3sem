#pragma once
#include <iostream>
#define MAX 10
using namespace std;
template <class T>
class Queue
{

    virtual void enqueue(T x)=0;
    virtual T dequeue()=0;
    virtual T peek()=0;
    virtual T back()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
};

template <class T>
class QueueImplementation : public Queue<T>
{

private:
    int front, rear;
    T a[MAX];
   
public:
    QueueImplementation(){front = 0,rear=-1;}
    virtual void enqueue(T x)
    {
        if (isFull())
        {
            cout << "Queue is full!";
        }
        else
        {
            a[++rear] = x;
            cout << x<<"\tEnqueue operation"<<endl;
        }
    }

    virtual T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!";
        }
        else
        {
            T x = a[front++];
            return x;
        }

    }

    virtual T peek()
    {
        if (!isEmpty())
        {
            T x = a[front];
            return x;
        }
        else
        {
            cout << "Queue is Empty";
        }
    }

    virtual T back()
    {
        if (!isEmpty())
        {
            T x = a[rear];
            return x;
        }
        else
        {
            cout << "Queue is Empty";
        }
    }

    virtual bool isEmpty()
    {
        return front==-1;
        
    }

    virtual bool isFull()
    {
        return rear==MAX-1;
        
    }
};