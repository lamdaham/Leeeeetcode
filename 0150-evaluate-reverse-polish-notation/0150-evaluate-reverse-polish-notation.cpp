class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stac;
        int temp1;
        int temp2;
        
        for(string &i: tokens) {
            if(i.size() > 1) {
                temp1 = stoi(i);
                stac.push(temp1);
                continue;
            }
            switch (i[0]) {
                case '+':
                    temp1 = stac.top();
                    stac.pop();
                    temp2 = stac.top();
                    stac.pop();
                    stac.push(temp1 + temp2);
                    break;
                case '-':
                    temp1 = stac.top();
                    stac.pop();
                    temp2 = stac.top();
                    stac.pop();
                    stac.push(temp2 - temp1);
                    break;
                case '/':
                    temp1 = stac.top();
                    stac.pop();
                    temp2 = stac.top();
                    stac.pop();
                    stac.push(temp2 / temp1);
                    break;
                case '*':
                    temp1 = stac.top();
                    stac.pop();
                    temp2 = stac.top();
                    stac.pop();
                    stac.push(temp1 * temp2);
                    break;
                default:
                    temp1 = stoi(i);
                    stac.push(temp1);       

            }
        }
        return stac.top();
    }
};