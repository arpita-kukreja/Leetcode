class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq;
        int left=0,right=0;
        int le=0;
        while(right<s.length()){
            if(freq.find(s[right])!=freq.end()){
                le=max(le,right-left);
                freq.erase(s[left]);
                left++;
            }
            else{
                freq[s[right]]++;
                right++;
            }
            
        }
        le=max(le,right-left);
        return le;
    }
};
