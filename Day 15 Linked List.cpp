      Node* insert(Node *head,int data)
      {
       if(head == NULL){
           return new Node(data);
       }
       Node *temp = head;
       while(temp->next != nullptr){
           temp = temp->next;
       }
       temp->next =new Node(data);
       return head;
      }
