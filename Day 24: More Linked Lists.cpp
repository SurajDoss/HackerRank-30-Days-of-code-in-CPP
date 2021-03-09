Node* removeDuplicates(Node *head)
{
  vector<int> i;
  if(head == NULL){
      return NULL;
  }
  Node * n =head;
  Node * p =head;
  while (n != NULL) {
          if(find(i.begin(),i.end(),n->data)!= i.end()){
          p->next = n->next;
      }else{  
          i.push_back(n->data);
          p =n;
      }
      n =n->next;
  }
  return head;
}
          
