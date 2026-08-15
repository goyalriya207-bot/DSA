class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length()!=t.length()) {
            return false;
        }

        else {
            int hash_s[26] = {0};
            int hash_t[26] = {0};

            for (int i = 0; i<s.length(); i++) {
                hash_s[s[i] - 'a']++;
            }
            for (int i = 0; i<t.length(); i++) {
                hash_t[t[i] - 'a']++;
            }

                for (int i = 0; i <26; i++) {
                    if (hash_s[i] != hash_t[i]) {

                        return false;
                        
                    }
                }
            

           
        }
        return true;
    }
};