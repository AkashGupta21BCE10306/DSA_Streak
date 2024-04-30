class Solution
{
    public:
    // task is to complete this function
    // function should return head to the list after making 
    // necessary arrangements
    struct Node* arrangeCV(Node *head)
    {
       //Code here
       Node*curr=head;
       Node*dummy1=new Node(-1);
       Node*ptr=dummy1;
       Node*dummy2=new Node(-1);
       Node*ptr2=dummy2;
       while(curr!=nullptr){
           char c=curr->data;
           if(c=='a'||c=='e'||c=='i'||c=='u'||c=='o'){
               ptr->next=new Node(c);
               ptr=ptr->next;
           }
           else{
               ptr2->next=new Node(c);
               ptr2=ptr2->next;
           }
           curr=curr->next;
       }
       ptr->next=dummy2->next;
       return dummy1->next;
    }
};

