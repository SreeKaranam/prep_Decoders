//function written in gfg
struct Node *temp;
struct Node *temp1;
Node* reverseList(Node *head)
{
    
    
    
    if(head->next==NULL)
    {
        temp=head;
        return temp;
    }
    reverseList(head->next);
    temp1=head->next;
    temp1->next=head;
    head->next=NULL;
    
    return temp;
  
}
