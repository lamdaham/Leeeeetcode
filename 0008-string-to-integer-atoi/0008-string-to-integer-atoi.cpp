class Solution {
public:
    int myAtoi(string s) {
        
        int output = 0;
        int neg = 1;
        bool start = false;
        
        for(char &ch : s) {
            switch(ch) {
                case '0':
                    start = true;
                    if (output > INT_MAX/10.0) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return INT_MAX;
                    }
                    output *= 10;
                    break;
                case '1':
                    start = true;
                    if (output > INT_MAX/10.0-0.1) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return INT_MAX;
                    }
                    output *= 10;
                    output += 1;
                    break;
                case '2':
                    start = true;
                    if (output > INT_MAX/10.0-0.2) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return INT_MAX;
                    }
                    output *= 10;
                    output += 2;
                    break;
                case '3':
                    start = true;
                    if (output > INT_MAX/10.0-0.3) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return INT_MAX;
                    }
                    output *= 10;
                    output += 3;
                    break;
                case '4':
                    start = true;
                    if (output > INT_MAX/10.0-0.4) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return INT_MAX;
                    }
                    output *= 10;
                    output += 4;
                    break;
                case '5':
                    start = true;
                    if (output > INT_MAX/10.0-0.5) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return INT_MAX;
                    }
                    output *= 10;
                    output += 5;
                    break;
                case '6':
                    start = true;
                    if (output  > INT_MAX/10.0-0.6) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return INT_MAX;
                    }
                    output *= 10;
                    output += 6;
                    break;
                case '7':
                    start = true;
                    if (output > INT_MAX/10.0-0.7) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return INT_MAX;
                    }
                    output *= 10;
                    output += 7;
                    break;
                case '8':
                    start = true;
                    if (output > INT_MAX/10.0 -0.8) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return INT_MAX;
                    }
                    output *= 10;
                    output += 8;
                    break;
                case '9':
                    start = true;
                    if (output > INT_MAX/10.0-0.9) {
                        if (neg == -1) {
                            return INT_MAX* neg -1;    
                        }
                        return (INT_MAX);
                    }
                    output *= 10;
                    output += 9;
                    break;
                case '-':
                    if(start) {
                        return output * neg;
                    }
                    start = true;
                    neg = -1;
                    break;
                case ' ':
                    if(start) {
                        return output * neg;
                    }
                    continue;
                case '+':
                    if(start) {
                        return output *neg;
                    }
                    start = true;
                    neg = 1;
                    continue;
                default:
                    return output *neg ;
            }
        }
        
        return output * neg;
        
    }
};