#include <bits/stdc++.h>
using namespace std;

struct Node{
    string name;
    long enroll;
    Node *next;
};

Node *create(string name, long enroll){
    Node *newnode = new Node();
    newnode->enroll = enroll;
    newnode->name = name;
    newnode->next = NULL;
    
    return newnode;
}

Node *insert(Node *head, string name, long enroll){
    
    if(head==NULL)
    {
        head = create(name,enroll);
    }
    else
    head->next = insert(head->next,name,enroll);
    
    
    return head;
}

void print(Node *head)
{
    while(head!=NULL)
    {
        head->name.resize(15);
        cout<<head->name<<setw(5)<<" "<<head->enroll<<endl;
        head=head->next;
    }
}
int main(){
    Node *head = NULL;
    
    head = insert(head,"Rohit Singh",190303105571);
    head = insert(head,"Prashant Singh",190303105569);
    head = insert(head,"Aman Singh",190303105564);
    head = insert(head,"Femil Savaliya",190303105572);
    head = insert(head,"Rushit Patel",190303108611);
    head = insert(head,"Raj Ponda",190303105517);
    
    print(head);

}




