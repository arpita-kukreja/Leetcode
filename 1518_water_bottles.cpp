class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int rem=numBottles%numExchange;
        while (numBottles>=numExchange) {
            ans+=numBottles/numExchange;
            numBottles=(numBottles/numExchange)+rem;
            rem=numBottles%numExchange;
        }

        return ans;
    }
};
