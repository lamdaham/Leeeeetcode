class Compare {
public:
    bool operator()(const vector<int>& a,
                    const vector<int>& b)
    {
        if (a[1] < b[1]) {
            return true;
        } else if (a[1] == b[1]) {
            return (b[0] > a[0]);
        }
        return false;
    }
};

class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        priority_queue<vector<int>, vector<vector<int>>, Compare> pq;
        for(vector<int> i : restaurants) {
            if(veganFriendly == 1 && i[2] != 1) {
                continue;
            } 
            if (i[3] <= maxPrice && i[4] <= maxDistance) {
                pq.push(i);
            }
        }
        vector<int> output(pq.size());
        int p = pq.size();
        for(int i = 0; i < p; i++) {
            output[i] = (pq.top())[0];
            pq.pop();
        }
        
        return output;
        
    }
};