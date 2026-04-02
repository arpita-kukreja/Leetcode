class Solution {
public:
    bool checkStrings(string s1, string s2) {
        if(s1==s2) return true;
        for(int i=0;i<s1.length()-2;i++){
            if(s1[i]==s2[i]) continue;
            for(int j=i+2;j<s1.length();j+=2){
                if(s1[j]==s2[i]) {
                    swap(s1[i],s1[j]);
                    break;
                }
            }
            if(s1[i]!=s2[i]) return false;
        }
        if(s1==s2) return true;
        return false;
    }
};
