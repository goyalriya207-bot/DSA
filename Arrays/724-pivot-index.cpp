class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int lsum=0,rsum=0;
        int inisum=0;
        for(int i=1;i<nums.size();i++){
            inisum+=nums[i];
        }
        rsum=inisum;
        for(int i=0;i<nums.size();i++){                    //initially for i=0 rs=tsum

          if(lsum==rsum){

            return i;
          }

          else{

                lsum+=nums[i];

                if(i+1<nums.size()){
                 rsum-=nums[i+1];
                }

                else{

                    return -1;
                }
            }  

                                   
        }
        return -1;
    }
};