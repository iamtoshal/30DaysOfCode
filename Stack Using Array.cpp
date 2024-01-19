#include <iostream>
using namespace std;

class Stack
{
public:
    // properties
    int *arr;
    int top;
    int size;

    // Behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow";
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow";
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty";
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout << st.peek() << endl;
    st.pop();
    cout << st.isEmpty() << endl;

    cout << st.peek() << endl;
    st.pop();
    cout << st.isEmpty() << endl;

    cout << st.peek() << endl;
    st.pop();
    cout << st.isEmpty() << endl;

    cout << st.peek() << endl;
    st.pop();
    cout << st.isEmpty() << endl;

    cout << st.peek() << endl;
    st.pop();
    cout << st.isEmpty() << endl;

    cout << st.peek() << endl;
    st.pop();
    cout << st.isEmpty() << endl;

    return 0;
}
