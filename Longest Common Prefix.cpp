/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"*/

#include <iostream>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string initial =strs[0];
        for (int i=0; i<initial.size(); i++) {
            int j=1;
            for (;j<strs.size(); j++) {
                if (initial[i]!=strs[j][i]) 
                    break;
            }
            if (j==strs.size()) 
                ans+=initial[i];
            else 
                break;
        }
        return ans;
    }
};