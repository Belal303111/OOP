#include <iostream>

using namespace std;
class Stack
{
private:
    int top=0;
    int volume;
    int *st;
public:
    Stack(int v=10)  //constructor
    {
        volume=v; //this -> volume =v
        st=new int[v];
        cout<<"The stack is created"<<endl;
    }
    ~Stack() //destructor
    {
        delete[] st;
        cout<<"The stack is destroyed"<<endl;
    }
    void push(int x)
    {
        if(top==volume) cout<<"The stack is full"<<endl;
        else{
            st[top]=x;
            top++;
        }
    }
    int pop()
    {
        if(top==0) {
             cout<<"The stack is empty"<<endl;
             return -1;
        }
        else{
            top--;
            return st[top];
        }
    }
    void print_stack()
    {
        if(top==0) cout<<"The stack is empty"<<endl;
        else{
        for(int i=0;i<top;i++)
        {
            cout<<st[i]<<" ";
        }
        cout<<endl;
        }
    }
    int getElementbyIndex(int index)
    {
        return st[index];
    }
};
int main()
{
    int x;
   Stack s1(5);
  for(int i=0;i<5;i++)
    {
        cin>>x;
        s1.push(x);
    }
    s1.print_stack();
    for(int i=4;i>=0;i--)
    {
        cout<<s1.getElementbyIndex(i)<<endl;
        s1.pop();
    }
    s1.print_stack();
    return 0;
}
