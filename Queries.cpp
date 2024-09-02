#include <bits/stdc++.h>
using namespace std;
int v;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head,int v)
{
    Node* newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void delete_any_position(Node* &head,int pos)
{
    Node* tmp=head;
    for(int i=0;tmp!=NULL && i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    if(tmp==NULL || tmp->next==NULL) return;
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void insert_at_head(Node* &head,int v)
{
    Node* newNode=new Node(v);
    newNode->next=head;
    head=newNode;
}
void delete_head(Node* &head)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
}
void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *head=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        if(x==0)
        {

            insert_at_head(head,v);
            print(head);
        }
        else if(x==1)
        {
            insert_at_tail(head,v);
            print(head);
        }
        else
        {
            if(v==0) {
            delete_head(head);
            print(head);
        }
        else
        {
            delete_any_position(head,v);
            print(head);
        }
    }
}
}
