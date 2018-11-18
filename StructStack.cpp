#include <iostream>
using namespace std;


struct stack{
int array[5];
int slaq;
};
 void init(stack * p)
 {
    p->slaq=0;
 }

void push(stack * p,int x)
 { 
   if(p->slaq==5)
     {cout<<"There are no place"<<endl;
      return;
     }
   p->array[p->slaq]=x;
   p->slaq++;
 }
  


void pop(stack * p)
 {
   if(p->slaq==1)
     {cout<<"Ther are nothing to delete"<<endl;
      return;
     }
   p->slaq--;
   cout<<"Last element is: ";
   cout<<p->array[p->slaq]<<endl; 
 } 


int get_minimum(stack* p)
  {
     
  }
int main(){
stack x;
init(&x);
int a;
cout<<"Enter number";
cin>>a;
push(&x,a);
cout<<"Enter number";
cin>>a;
push(&x,a);
cout<<"Enter number";
cin>>a;
push(&x,a);
cout<<"Enter number";
cin>>a;
push(&x,a);
cout<<"Enter number";
cin>>a;
push(&x,a);
cout<<"Enter number";
cin>>a;
push(&x,a);
pop(&x);
cout<<"Enter number";
cin>>a;
push(&x,a);   
}

