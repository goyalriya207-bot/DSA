class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        /* int found=0;
         int i;
         int j;

         for(i=0;i<nums.size();i++){
             for(j=i+1;j<nums.size();j++){
                 if(nums[i]+nums[j]==target){

                     found=1;                              //brute force approach
                     break;

                 }
             }
             if(found==1){
                 break;
             }
         }

         ans.push_back(i);
         ans.push_back(j);

         return ans;*/

        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int need = target-nums[i];

            if (mpp.find(need) != mpp.end()) {
                return {mpp[need], i};
            } else {                                     //hashing concept
                mpp[nums[i]] = i;
            }
        }

        return {};
    }
};