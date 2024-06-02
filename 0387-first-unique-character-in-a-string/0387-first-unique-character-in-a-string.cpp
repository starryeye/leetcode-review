class Solution {
public:
    int firstUniqChar(string s) {
        
        
        unordered_map<char, vector<int>> um; //k: char, v: index
        
        for(int i = 0; i < s.size(); i++) {
            um[s[i]].push_back(i);
        }
        
        int answer = s.size();
        
        for(auto u : um) {
            if(u.second.size() == 1)
                answer = min(answer, u.second.front());
        }
        
        return answer == s.size() ? -1 : answer;
    }
};