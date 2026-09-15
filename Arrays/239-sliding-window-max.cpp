class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) { 

  /*   vector<int> ans;
    for(int i=0;i<=nums.size()-k;i++){
          int maxi=INT_MIN;
        int end=i+k-1;
        for(int j=i;j<=end;j++){                     //brute force
            maxi=max(maxi,nums[j]);
        }
        ans.push_back(maxi);
    }

    return ans;*/
       
       vector<int> ans;
       deque<int> dq;

       for(int i=0;i<k;i++){
        while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                   dq.pop_back();
        } 

        dq.push_back(i);    
      }

      for(int i=k;i<nums.size();i++){
            
            ans.push_back(nums[dq.front()]);

            while(dq.size()>0 && dq.front()<=i-k){
                dq.pop_front();
            }
             while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                   dq.pop_back();
             } 

              dq.push_back(i);


      }
      
      ans.push_back(nums[dq.front()]);
      return ans;
        
    }
};