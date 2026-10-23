class{
    public:

    vector<int> preInPost(TreeNode * root){
        stack<pair<TreeNode*,int>> st;
        vector<int> pre,in,post;
        st.push({root,1});

        if(root==NULL)
          return;

          while(!st.empty()){

             auto it=st.top();
             st.pop();

             //this is pre part increase 1 to 2 and push left side of stack

             if(it.second==1){
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);

                if(it.first->left !=NULL){
                    st.push({it.first->left,1});
                }

             }

             //this is in part increase 2 to 3 and push right

             else if(it.second==2){
                    post.push_back(it.first->val);
                    it.second++;
                    st.push(it);

                    if(it.first->right!=NULL){
                        st.push({it.first->right,1});
                    }
                
             }
             //don't push it again
             else{
                 post.push_back(it.first->val);


             }
          }

    }
};