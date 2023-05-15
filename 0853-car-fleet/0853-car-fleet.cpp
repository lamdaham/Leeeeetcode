class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> lis;
        for(int i = 0; i < position.size(); i++) {
            lis.push_back({position[i], speed[i]});
        }
        
        sort(lis.begin(), lis.end());
        stack<double> stac;
        for(pair<int,int> &i: lis) {
            stac.push((target - i.first)/ (double)i.second);
        }
        double temp1;
        int p = 0;
        for(int i = 0; i < position.size()-1; i++) {
            temp1 = stac.top();
            stac.pop();
            // cout << temp1 << " " << stac.top() << "\n";
            if(temp1 >= stac.top()) {
                stac.pop();
                stac.push(temp1);
                continue;
            }
            // stac.push(temp1);
            p++;
            
        }
        return stac.size() + p;
    }
};

// 3 7 1


    
