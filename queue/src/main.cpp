#include "queue.h"
using namespace std;

int main()
{
    QueueImplementation<int>q1;
    
    q1.enqueue(55);
    q1.enqueue(21);
    q1.enqueue(45);
    q1.enqueue(100);
    cout<<"Top Element is:"<<q1.peek()<<endl;
    cout<<"Last Element is:"<<q1.back()<<endl;
    cout<<"Queue elements are:\n";

    cout << q1.dequeue()<<"\t";
    cout << q1.dequeue()<<"\t";
    cout << q1.dequeue()<<"\t";
    cout << q1.dequeue()<<endl;

    QueueImplementation<char>q2;
    q2.enqueue('S');
    q2.enqueue('I');
    q2.enqueue('R');
    q2.enqueue('I');
    cout<<"Top Element is:"<<q2.peek()<<endl;
    cout<<"Last Element is:"<<q2.back()<<endl;
    cout<<"Queue elements are:\n";

    cout <<q2.dequeue()<<"\t";
    cout <<q2.dequeue()<<"\t";
    cout <<q2.dequeue()<<"\t";
    cout <<q2.dequeue()<<"\t";
    
    
    return 0;
}