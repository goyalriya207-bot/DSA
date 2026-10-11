class Solution {
public:
    bool isAnagram(string s, string t) {
           
           /*if(s.size()!=t.size()){
              return false;
           }

           sort(s.begin(),s.end());
           sort(t.begin(),t.end());

           for(int i=0;i<s.size();i++){
                 if(s[i]!=t[i]){
                    return false;
                 }
           }

           return true;*/

        unordered_map<char, int> s_chars;
        unordered_map<char, int> t_chars; 

        for(char c : s){
            s_chars[c]++;
        }

        for(char c : t){
            t_chars[c]++;
        }

        if(s_chars == t_chars){
            return true;
        }

        return false;
    }
};