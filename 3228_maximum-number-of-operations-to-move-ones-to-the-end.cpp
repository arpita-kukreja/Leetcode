class Solution {
public:
    int maxOperations(string s) {
        int ans=0;
        int one=0;
        int i=0;
        while(i<s.length()-1){
            if(s[i]=='1'){
                one++;
                while(s[i+1]=='0'){
                    i++;
                    if(s[i+1]=='1'){
                        ans+=one;
                    }
                }
            }
            i++;
        }
        if(s[s.length()-1]=='0'){
            ans+=one;
        }
        return ans;
    }
};
