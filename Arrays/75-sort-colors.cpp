class Solution {
public:
    void sortColors(vector<int>& nums) {

       /* int c0=0,c1=0,c2=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c0++;
            }
            else if(nums[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        int k=0;
        for(int i=0;i<c0;i++){
            nums[i]=0;
            k++;                                        //brute force approach

        }
        for(int i=0;i<c1;i++){
             nums[k]=1;
             k++;


        }

        for(int i=0;i<c2;i++){
            nums[k]=2;
            k++;
        }*/
        
        // OPTIMISED APPROACH

        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{

                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
