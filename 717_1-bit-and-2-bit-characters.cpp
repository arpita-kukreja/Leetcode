class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        bool check=false;
        int i=0;
        while(i<n){
            if(bits[i]==1){
                i+=2;
                check=false;
            } 
            else{
                check=true;
                i++;
            }
        }
        if(bits[n-1]==0 && check) return true;
        return false;
        
    }
};
