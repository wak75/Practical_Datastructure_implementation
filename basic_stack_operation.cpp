//first simple stack program;
#include<iostream>
using namespace std;

const int k=5;
int stack[k];
int top=-1;

void display();
void push();
void peek();
void pop();
void isempty();
void isfull();

int main()
{
    int ch;

    while(1)
    {
        cout<<"\n\tStack Menu\n";
        cout<<"\t1. Display\n";
        cout<<"\t2. Push\n";
        cout<<"\t3. Pop\n";
        cout<<"\t4. Peek\n";
        cout<<"\t5. isempty\n";
        cout<<"\t6. isfull\n";

        cout<<"Enter the task you want to perform: ";
        cin>>ch;
    

        switch(ch)
        {
            case 1:
                display();
                break;
            
            case 2:
                push();
                break;
            
            case 3:
                pop();
                break;

            case 4:
                peek();
                break;

            case 5:
                isempty();
                break;

            case 6:
                isfull();
                break;

            default:
                cout<<"INVALID CHOICE, try again";
                break;

        }

    }
}

void display()
{
    if(top==-1)
    {
        cout<<"list id empty!!";
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
        
    }
    
    
}

void push()
{
    int element;
    cout<<"enter the data you want to insert: ";
    cin>>element;

    if(top==k-1)
    {
        cout<<"Overflow condition!!!";
    }
    else
    {
        top++;
        stack[top]=element;
        
    }
  
}

void pop()
{
    int element;
    
    if(top==-1)
    {
        cout<<"underflow condition!!!";
    }
    else
    {
        cout<<"the poped element is: "<<stack[top];
        top--;

    }

}

void peek()
{
    if(top==-1)
    {
        cout<<"list is empty!!";
    }
    cout<<"the top most element is : "<<stack[top];
}

void isfull()
{
    if(top==4)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"False";
    }

}

void isempty()
{
    if(top==-1)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"False";
    }
    
}
