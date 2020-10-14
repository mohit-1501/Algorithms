#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
struct Node {
        int data;
        Node* next;
    };
Node* insert(Node *head,int x);
void print(Node *head);

int main()
{
    cout << "Enter the length:";
    struct Node *head=NULL;
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "ENTER THE NO." << endl;
        int x;
        cin >> x;
        head=insert(head, x); //always head inside insert is null here
        print(head);        //reason for above is head turns to null after this is executed
    }
    return 0;
}

Node* insert(Node *head,int x){
    Node *temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;   // if(head!=NULL) // temp->next=head;
    // head=temp;
    return head;
}

void print(Node *head){
    cout << "The list is :"<< endl;
    while(head!=NULL){
        cout << (head->data) << endl;
        head=head->next;
    }
    cout << endl;
}