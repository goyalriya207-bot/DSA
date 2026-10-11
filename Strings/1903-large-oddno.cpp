class Solution {
public:
    string largestOddNumber(string num) {

        if(num[num.size()-1]=='1'||num[num.size()-1]=='3'||num[num.size()-1]=='5'||num[num.size()-1]=='7'||num[num.size()-1]=='9')
             return num;

       for(int i=num.size()-2;i>=0;i--){
              
              if(num[i]=='1' ||num[i]=='3'||num[i]=='5'||num[i]=='7'||num[i]=='9'){
                          
                           return num.substr(0, i+1);
              }
              
       }

       return ""; 
    }
};