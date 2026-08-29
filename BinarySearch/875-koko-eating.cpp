class Solution {
public:
    
    bool isvalid(vector<int>& piles,int h,int minspeed){
          long time=0;
          long hours;

          for(int i=0;i<piles.size();i++){
             hours = (piles[i] + minspeed - 1) / minspeed;
              time+=hours;
          }

          if(time<=h){
            return true;
          }                                                                        //time consuming code
          else{
            return false;
          }

    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low=1;
        int high=0;
         int maxi = INT_MIN;

        for(auto it : piles){
            maxi = max(it , maxi);
        }

       high=maxi;
        int ans;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(isvalid(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;    
            }

        }

        return ans;
    }
};