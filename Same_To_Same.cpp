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
void insert1_at_tail(Node* &head1,Node* &tail1,int val)
{
    Node *newNode=new Node(val);
    if(head1==NULL)
    {
        head1=newNode;
        tail1=newNode;
        return;
    }
    tail1->next=newNode;
    tail1=newNode;
}
void insert2_at_tail(Node* &head2,Node* &tail2,int val)
{
    Node *newNode=new Node(val);
    if(head2==NULL)
    {
        head2=newNode;
        tail2=newNode;
        return;
    }
    tail2->next=newNode;
    tail2=newNode;
}
int compare(Node *head1,Node* head2,Node* tail1,Node* tail2)
{
    while(head1!=NULL)
    {
        if(head1->val!=head2->val) return 0;
        head1=head1->next;
        head2=head2->next;
    }
    return 1;
}
    int main(){
        int n1=0,n2=0;
        Node *head1=NULL,*tail1=NULL;
    Node *head2=NULL,*tail2=NULL;
        for(int i=0;i<2;i++){
 while(true)
    {
        int val;
        cin>>val;
        if(val==-1) break;
        if(i==0) n1++;
        else n2++;
       if(i==0) insert1_at_tail(head1,tail1,val);
       else insert2_at_tail(head2,tail2,val);
    }

    }


    if(n1!=n2) cout<<"NO"<<endl;
    else if(compare(head1,head2,tail1,tail2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

