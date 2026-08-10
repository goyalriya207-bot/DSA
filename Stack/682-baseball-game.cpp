class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int> stack(operations.size());
        
        int top=-1;
        for(int i=0;i<operations.size();i++){
           if(operations[i]=="C"){
               top--;
           }

           else if(operations[i]=="D"){
            int d=stack[top]*2;
            top++;
            stack[top]=d;
           }
           else if(operations[i]=="+"){
              int sum=stack[top]+stack[top-1];
              top++;
              stack[top]=sum;
           }
           else{
              top++;
              stack[top]=stoi(operations[i]);
           }
        }
        int total=0;
        for(int j=top;j>=0;j--){
            total+=stack[j];
        }

        return total;
    }
};