//function written in gfg
Node* addTwoLists(Node* first, Node* second) {
    struct Node *cur=NULL;
    struct Node *prev=NULL;
    struct Node *s=NULL;
    int dt;
    int flag=0;
    while(first!=NULL || second!=NULL)
    {
        dt=0;
        dt=(first?first->data:0)+(second?second->data:0)+flag;
        if(dt>=10)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
        dt=dt%10;
        cur=new Node(dt);
        if(s==NULL)
        {
            s=cur;
        }
        else
        {
            prev->next=cur;
        }
        prev=cur;
        if(first)
        {
            first=first->next;
        }
        if(second)
        {second=second->next;
        }
    }
    if(flag>0)
    {
        cur->next=new Node(flag);
    }
    // Code here
    return s;
}