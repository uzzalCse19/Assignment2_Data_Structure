#include <bits/stdc++.h>
using namespace std;
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
void delete_duplicate(Node* &head)
{
    Node* tmp=head;
    while(tmp !=NULL && tmp->next!=NULL)
    {
        Node* tmp2=tmp;
        while(tmp2->next!=NULL)
        {
            if(tmp2->next->val==tmp->val)
            {
                Node* duplicate=tmp2->next;
                tmp2->next=tmp2->next->next;
                delete duplicate;
            }
            else
            {
                tmp2=tmp2->next;
            }
        }
        tmp=tmp->next;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
while(true)
{
int v;
cin>>v;
if(v==-1) break;
insert_at_tail(head,tail,v);
}

delete_duplicate(head);
print(head);
}

