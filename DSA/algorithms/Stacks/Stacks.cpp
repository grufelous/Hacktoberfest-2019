#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    node *next;
};
node* head = NULL;
void push(int value)
{
    node* p = new node;
    p->data = value;
    p->next = head;
    head = p;
}


void pop()
{
	cout<<"The element "<<head->data<<" is popped out."<<endl;
    head =head->next;
}

void display()
{
	node *ptr;
    ptr = head;
    cout<<"Elements of stack are : ";
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
    int ch=0,value;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display the stack"<<endl;
    cout<<"4) Exit"<<endl;
    while(ch!=4)
    {
      cout<<"Enter choice: ";
      cin>>ch;
      switch(ch) 
      {
         case 1: 
         {
            cout<<"Enter value to insert:  ";
            cin>>value;
            push(value);
            break;
         }
         case 2: 
         {
            pop();
            break;
         }
         case 3: 
         {
            display();
            break;
         }
         case 4: 
         {
            cout<<"Exit"<<endl;
            break;
         }
         default: 
         {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }
   return 0;
}
