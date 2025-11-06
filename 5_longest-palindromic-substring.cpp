class Solution {
public:
    string longestPalindrome(string s) {
        int sta=0,m=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int l=i , r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>m){
                    m=r-l+1;
                    sta=l;
                }
                l--;
                r++;
            }
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>m){
                    m=r-l+1;
                    sta=l;
                }
                l--;
                r++;
            }
        }
        return s.substr(sta, m);
    }
};
