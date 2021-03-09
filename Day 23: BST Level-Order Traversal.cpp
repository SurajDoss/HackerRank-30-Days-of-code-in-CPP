	void levelOrder(Node * root){
    queue<Node *> que;
    Node * c;
    
    if(root != NULL){
        que.push(root);
    }
    
    while (!que.empty()) {
        c = que.front();
        que.pop();
        cout<<c->data <<" ";
        if(c->left != NULL){
            que.push(c->left);
        }
        if(c->right != NULL){
            que.push(c->right);
        }
    }
  	
  
	}
