  int getHeight(Node* root){
    if(!root){
        return -1;
    }
    int leftdepth, rigtdepth;
    leftdepth = getHeight(root->left);
    rigtdepth = getHeight(root->right);
    return max(leftdepth,rigtdepth)+1;
  }
