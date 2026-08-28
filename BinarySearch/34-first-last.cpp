class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        vector<int> ans;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(target<nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                st=mid+1;
            }
            else{
                if(mid==0 || nums[mid-1]!=target){
                         ans.push_back(mid);
                         st=mid+1;
                }
                else{

                    end=mid-1;
                }    

            }
        } 
        st=0,end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(target<nums[mid]){
                end=mid-1;
            }
            else if(target>nums[mid]){
                st=mid+1;
            }
            else{
                if(mid==nums.size()-1 || nums[mid+1]!=target){
                         ans.push_back(mid);
                         end=mid-1;
                         
                }
                else{

                    st=mid+1;
                }    

            }
        }  

        if(ans.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }   
        else{
            return ans;
        }
    }
};