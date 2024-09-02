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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void find_max_min(Node *head)
{
    int maximum=INT_MIN,mn=INT_MAX;
    while(head!=NULL)
    {
        if(head->val>maximum) maximum=head->val;
        if(head->val<mn) mn=head->val;
        head=head->next;
    }
cout<<maximum-mn<<endl;
}
int main()
{
 Node *head=NULL,*tail=NULL;
 while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    find_max_min(head);
}
