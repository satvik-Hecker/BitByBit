#include <bits/stdc++.h>
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> counts(26,0);
        for(char c: s){
            counts[c-'a']++;
        }
        for(char c: t){
            counts[c-'a']--;
        }
        for(int i:counts){
            if (i!=0) return false; 
        }
        return true;
    }
};