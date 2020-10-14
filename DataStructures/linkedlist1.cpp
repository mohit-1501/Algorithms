#include<bits/stdc++.h>
using namespace std;
struct Node {
        int data;
        Node* next;
    };
struct Node *head; //global variable
/* If head was not global and only declared in the main function
then we would have to pass Node* head i.e, value and address of head to 
every other function we are using eg.,void insert(int x,Node *head); 
And then we won't need temp in other functions, we can directly use head*/
void insert(int x);
void print();

int main()
{
    cout << "Enter the length:";
    head=NULL;
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "ENTER THE NO." << endl;
        int x;
        cin >> x;
        insert(x);
        print();
    }
    return 0;
}

void insert(int x){
    Node *temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;   // if(head!=NULL) // temp->next=head;
    // head=temp;
}

void print(){
    Node *temp=new Node();
    temp=head;
    cout << "The list is :"<< endl;
    while(temp!=NULL){
        cout << (temp->data) << endl;
        temp=temp->next;
    }
    cout << endl;
}