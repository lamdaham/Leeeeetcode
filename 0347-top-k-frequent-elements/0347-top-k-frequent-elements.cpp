class Solution {
public:
    
    struct myComp {
        constexpr bool operator()(
            pair<int, int> const& a,
            pair<int, int> const& b)
            const noexcept
        {
            return a.second < b.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        priority_queue<pair<int,int>, vector<pair<int, int>>, myComp> pq;
        vector<int> output;
        for(int i: nums) {
            map[i]++;
        }
        
        pair<int, int> temp;
        for(auto &i: map) {
            temp = i;
            
            pq.push(i);
        }
        
        for(int i = 0; i < k; i++) {
            output.push_back(pq.top().first);
            pq.pop();
        }
        return output;
    }
};