class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
            if (i >= k) {
                freq[nums[i - k]]--;
                if (freq[nums[i - k]] == 0)
                    freq.erase(nums[i - k]);
            }
            if (i >= k - 1) {
                priority_queue<pair<int, int>> pq;
                for (auto& [num, f] : freq)
                    pq.push({f, num});

                int cnt = 0, sum = 0;
                while (!pq.empty() && cnt < x) {
                    auto [f, num] = pq.top();
                    pq.pop();
                    sum += f * num;
                    cnt++;
                }
                
                ans.push_back(sum);
            }
        }

        return ans;
        
    }
};
