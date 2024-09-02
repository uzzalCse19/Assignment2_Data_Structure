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
int find_target(Node* head,int val)
{
    int i=0;
    while(head!=NULL)
    {
        if(head->val==val) return i;
        i++;
        head=head->next;
    }
    return -1;
}
    int main(){
        int t,target;
        cin>>t;
        while(t--){
 Node *head=NULL,*tail=NULL;
 while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    }
    cin>>target;
    cout<<find_target(head,target)<<endl;
    }
}

