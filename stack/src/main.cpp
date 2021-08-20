#include "stack.h"
using namespace std;

int main()
{
    StackImplementation<int> s1;
    
    //class Stack s;
    s1.push(55);
    s1.push(21);
    s1.push(45);
    s1.push(100);
    cout<<"Top Element is:"<<s1.peek()<<endl;
    cout<<"Stack elements are:\n";

    cout << s1.pop()<<endl;
    cout << s1.pop()<<endl;
    cout << s1.pop()<<endl;
    cout << s1.pop()<<endl;

    StackImplementation<char>s2;
    s2.push('C');
    s2.push('O');
    s2.push('M');
    s2.push('P');
    cout<<"Top Element is:"<<s2.peek()<<endl;
    cout<<"Stack elements are:\n";

    cout << s2.pop()<<"\t";
    cout << s2.pop()<<"\t";
    cout << s2.pop()<<"\t";
    cout << s2.pop()<<"\t";
    
    
    return 0;
}