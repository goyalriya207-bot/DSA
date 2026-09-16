class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
           int mini=INT_MAX;
            int st=0;
            int sum=0;
            int ws=0;

            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                ws++;

                while(sum>=target){
                    
                    sum-=nums[st];
                    st++;
                    ws--;
                    mini=min(mini,ws);
                   
                    
                }
            }

            if(mini!=INT_MAX){
                return mini+1;
            }

            else{
                 return 0;
            }
        
        
    }
};