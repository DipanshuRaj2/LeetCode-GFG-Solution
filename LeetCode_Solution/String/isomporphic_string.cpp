/*Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"
Output: true
Example 2:

Input: s = "foo", t = "bar"
Output: false
Example 3:

Input: s = "paper", t = "title"
Output: true*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isIsomorphic(string s, string t){
        unordered_map<char, char>mp1;
        unordered_map<char, char>mp2;

        int m = s.length();

        for(int i = 0; i<m; i++){
            char ch1 = s[i];
            char ch2 = t[i];

            if(mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2 ||
               mp2.find(ch2) != mp1.end() && mp2[ch2] != ch1){
                return false;
        }
           mp1[ch1] = ch2;
           mp2[ch2] = ch1;
        }
        return true;
    }
};
int main()
{
    Solution sol;
    string s = "egg";
    string t = "add";
    cout<<sol.isIsomorphic(s, t);
   return 0;
}