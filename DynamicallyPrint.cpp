#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node   *next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){

//dynamically initialization of Linked list!

node *n1 = new node(10);
node *n2 = new node(20);
node *n3 = new node(30);
node *n4 = new node(40);
node *n5 = new node(50);

node *head = n1;
n1->next = n2;
n2->next = n3;
n3->next = n4;
n4->next = n5;
n5->next = NULL;




print(head);






    return 0;
}