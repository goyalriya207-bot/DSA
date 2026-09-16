class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int l=0;
        int r=0;
        int ans=0;
        int c0=0;

        while(r<nums.size()){
            if(nums[r]==0){
                c0++;
            }

            while(c0>k){
                if(nums[l]==0){
                    c0--;
                }
                l++;
            }

            if(c0<=k){
                int len=r-l+1;
                ans=max(ans,len);
            }

            r++;
        }
        return ans;
    }
};