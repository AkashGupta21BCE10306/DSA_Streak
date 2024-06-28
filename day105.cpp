bool areIdentical(struct Node *head1, struct Node *head2) {
    struct Node* temp1 = head1;
    struct Node* temp2 = head2;
    while(temp2!=NULL && temp1!=NULL ){
        if(temp1->data!=temp2->data){
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    if(!temp1 && !temp2){
        return true;
    }
    return false;
}