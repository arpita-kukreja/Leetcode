class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()>2){
            string a="";
            for(int i=1;i<s.length();i++){
                int n = ((s[i - 1] - '0') + (s[i] - '0')) % 10;
                a.push_back(n + '0');
            }
            s=a;
        }
        if(s[0]==s[1]) return true;
        return false;
    }
};
