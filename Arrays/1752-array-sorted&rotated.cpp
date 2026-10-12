class Solution {
public:
    bool check(vector<int>& nums) {

        vector<int> ans;
        int ind;

        for (int i = 0; i < nums.size()-1; i++) {

            if (nums[i] > nums[i + 1]) {
                ind = i;
                for (int j= ind + 1; j < nums.size(); j++) {                          //brute force TC=O(N)
                                                                                      //SC=O(N);
                    ans.push_back(nums[j]);
                }

                for (int j = 0; j <= ind; j++) {
                    ans.push_back(nums[j]);
                }

                break;

            }

    
        }

        if(ans.empty()){
            return true;
        }

        if (is_sorted(ans.begin(), ans.end())) {
            return true;
        } 
        else {
            return false;
        }
    }
};

//TC=O(N)
//SC=O(1)

int count=0;
for(int i=0;i<nums.size();i++){
    if(nums[i] > nums[(i + 1) % nums.size()]){
        count++;
    }
}

if(count<=1){
    return true;
}
else{
    return false;
}