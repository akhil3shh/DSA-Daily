/*Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.*/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0||(x!=0 && x%10==0)) return false;
        int sum=0;
        while (x>sum) {
            sum=sum*10+x%10;
            x/=10;
        }
        return ((x==sum)||(x==sum/10));
    }
};