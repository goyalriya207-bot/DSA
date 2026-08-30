class Solution {
public:

    bool isvalid(vector<int>& weights,int days,int minweight){
        int total_days=1,load=0;

        for(int i=0;i<weights.size();i++){
            if(load+weights[i]<=minweight){
                load+=weights[i];
            }
            else{

                total_days++;
                load=weights[i];                  //LONG METHOD
            }
        }

        if(total_days<=days){
            return true;
        } 
        else{
            return false;
        } 

    }
    int shipWithinDays(vector<int>& weights, int days) {

        int low;
        int high;
        int maxi = INT_MIN;

        for(auto it : weights){
            maxi = max(it , maxi);
        }

        low=maxi;
        int sum=0;
        int ans=0;

        for(int i=0;i<weights.size();i++){
                  sum+=weights[i];
        }

        while(low<=high){
            int mid=low+(high-low)/2;

            if(isvalid(weights,days,mid)){
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