class Solution {
public:
    string originalDigits(string s) {
        
        std::map<char,int> charMap;
        
        for(int i = 0; i < s.size(); i++) {
            charMap[s[i]]++;
        }
        
        charMap['t'] -= charMap['w'];
        charMap['o'] -= charMap['w'];
        
        charMap['f'] -= charMap['u'];
        charMap['o'] -= charMap['u'];
        charMap['r'] -= charMap['u'];
        
        charMap['s'] -= charMap['x'];
        charMap['i'] -= charMap['x'];
        
        charMap['e'] -= charMap['g'];
        charMap['i'] -= charMap['g'];
        charMap['h'] -= charMap['g'];
        charMap['t'] -= charMap['g'];
        
        charMap['e'] -= charMap['z'];
        charMap['r'] -= charMap['z'];
        charMap['o'] -= charMap['z'];
        
        charMap['n'] -= charMap['o'];
        charMap['e'] -= charMap['o'];
        
        charMap['t'] -= charMap['r'];
        charMap['h'] -= charMap['r'];
        charMap['e'] -= 2 * charMap['r'];
        
        charMap['i'] -= charMap['f'];
        charMap['v'] -= charMap['f'];
        charMap['e'] -= charMap['f'];
        
        charMap['e'] -= 2 * charMap['s'];
        charMap['v'] -= charMap['s'];
        charMap['n'] -= charMap['s'];
        
        string output = "";
        
        
        output += string(charMap['z'],'0' );
        output = output + string(charMap['o'],'1');
        output = output + string(charMap['w'],'2');
        output = output + string(charMap['r'],'3');
        output = output + string(charMap['u'],'4');
        output = output + string(charMap['f'],'5');
        output = output + string(charMap['x'],'6');
        output = output + string(charMap['s'],'7');
        output = output + string(charMap['g'],'8');
        output = output + string(charMap['i'],'9');
        
        return output;
            
        
    }
};
// one o
//         two   w
// three r
//         four u
// five f
//         six x
// seven s
//         eight g
// nine 
//         zero z