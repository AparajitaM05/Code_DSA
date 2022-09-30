//Find middle of the element in stack o(1);
struct Node{
    struct Node* next;
    struct Node* prev;
    int data;
    Node(int x)
    {
        data=x;
        next=prev=NULL;
    }
};
Node* dummy=new Node(-1);
Node* head=dummy;
Node* mid=dummy;
int c=0;

void push(int data)
{
    Node* curr=new Node(data);
    curr->prev=NULL;
    curr->next=head;
    c++;
    head->pre=curr;
    head=curr;
    if(c==1)mid=curr;
    else if(c%2==0)mid=mid->prev;
}
void pop()
{
    if(c==0)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    Node* temp=head->data;
    int x=head->next;
    head=head->next;
    if(head!=NULL)
    {
        head->prev=NULL;
        c--;
        if(c&1)
        {
            mid=mid->next;
        }
        free(temp);
        return x;
    }
}
int middle()
{
    if(c==0)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    return mid->data;
}