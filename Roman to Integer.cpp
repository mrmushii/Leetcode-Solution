class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> rom  ={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans = 0;

        for(int i =0;i<s.length();i++){
            if(rom[s[i]]<rom[s[i+1]]){
                ans-=rom[s[i]];
            }else{
                ans+=rom[s[i]];
            }
        }
        return ans;
    }
};