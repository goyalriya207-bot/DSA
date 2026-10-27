class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        //BRUTE FORCE APPROACH
        /* vector<int> ans;
        int count=0;

        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    ans.push_back(arr1[j]);
                    arr1[j]=INT_MIN;
                    count++;
                }
            }
        }
        for(int i=0;i<arr1.size();i++){
           if(arr1[i]!=INT_MIN){
             ans.push_back(arr1[i]);
           }
        }

        sort(ans.begin() + count, ans.end());
        return ans;*/

        //OPTIMISED APPROACH

        vector<int> freq(1001,0);
        vector<int> ans;

        for(int i=0;i<arr1.size();i++){

            freq[arr1[i]]++;
        }
        int count=0;

        for(int i=0;i<arr2.size();i++){

            for(int j=0;j<freq[arr2[i]];j++){
                   ans.push_back(arr2[i]);
                   count++;
            }

            freq[arr2[i]]=0;
        }

        for(int i=0;i<arr1.size();i++){
            if(freq[arr1[i]]!=0){
                ans.push_back(arr1[i]);
            }
        }

           sort(ans.begin() + count, ans.end());
           return ans;
        
    }
};