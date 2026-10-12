class Solution {
public:
    string frequencySort(string s) {
           
        unordered_map<char, int> s_chars;
        for(char c : s){
            s_chars[c]++;
        }

        vector<pair<char, int>> v;
                    
        for (auto p : s_chars) {
                v.push_back(p);
        }
        
         sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        string ans = "";

        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].second; j++) {
                ans += v[i].first;
            }
        }

        return ans;   

    }
};