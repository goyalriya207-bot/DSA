class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count=0;
        int maxi=INT_MIN;

        for(int i=0;i<nums.size();i++){
             
             if(nums[i]==1){
                count++;
                maxi=max(maxi,count);
             }
             
             else{

                count=0;
             }
        }

        if(maxi==INT_MIN){
            return 0;
        }
        else{

            return maxi;
        }
        
    }
};