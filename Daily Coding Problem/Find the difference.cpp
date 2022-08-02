/*
This question is asked by Google.
You are given two strings, s and t which only consist of lowercase letters. 
t is generated by shuffling the letters in s as well as potentially adding an additional
random character. Return the letter that was randomly added to t if it exists, 
otherwise, return ’  ‘.
Note: You may assume that at most one additional character can be added to t.*/

class Solution {
public:
    char findTheDifference(string s, string t) {
        char c=NULL;        
        unordered_map<char,int>m;        
        for(auto i :s) m[i]++;
        for(auto i: t) m[i]--;
        for(auto i: m) if(i.second==-1) c = i.first;
        return c;
        
    }
};