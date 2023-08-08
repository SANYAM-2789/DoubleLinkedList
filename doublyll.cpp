#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

};

void insertAtHead(Node* &head,Node* &tail,int d)
{
    if(head==NULL)
    {
        Node* temp= new Node(d);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &head,Node* &tail,int d)
{
    if(tail==NULL)
    {
        Node* temp= new Node(d);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertAtN(Node* &head,Node* &tail, int d, int n)
{
    if(n==1)
    {
        insertAtHead(head,tail,d);
    }
    else{
    Node* temp = head;
    int cnt=1;
    while(cnt<n-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertAtTail(head,tail,d);
        return;
    }
    Node* node2= new Node(d);
    node2->next=temp->next;
    temp->next= node2;
    node2->prev=temp;
    }
}
void deleteNNode=(Node* &head, int n)
{
    Node* temp
}
void countLength(Node* &head)
{
    Node* temp = head;
    int count=1;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<"Length : "<<count<<endl;
}

void printNode(Node* &head)
{
    Node* temp= head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}


int main()
{
    // Node*node1= new Node(10);
    Node* head= NULL;
    Node* tail= NULL;
    printNode(head);
    insertAtHead(head,tail,11);
    insertAtHead(head,tail,14);
    insertAtHead(head,tail,15);
    insertAtTail(head,tail,12);
    insertAtTail(head,tail,18);
    insertAtTail(head,tail,19);
    printNode(head);
    countLength(head);
    cout<<"Head :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;
    insertAtN(head,tail,69,7);
    printNode(head);
     countLength(head);
    cout<<"Head :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;
}