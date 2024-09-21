#include <bits/stdc++.h>
using namespace std;

//////////////////////          Leetcode 1047
/*
     Input: s = "abbaca"
     Output: "ca"
     Explanation: 
     For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
*/
/*
     string removeDuplicates(string s) {
        string newS = "";
        int n = s.length();
        int i=0;
        while(i<n){
            if(newS.length()>0 && newS.back() == s[i]){
                newS.pop_back();
            }else{
                newS.push_back(s[i]);
            }
            i++;
        }
        return newS;
    }
*/
/*
     Approach 
     Make a new empty string and check the last most char of that string and match it with the chars of the original string 
     use loop
     If it doesn't match that push the char into the empty string
     else pop the last elm from the empty string
*/




/////////////////////          Leetcode 1209
/*
     Input: s = "deeedbbcccbdaa", k = 3
     Output: "aa"
     Explanation: 
     First delete "eee" and "ccc", get "ddbbbdaa"
     Then delete "bbb", get "dddaa"
     Finally delete "ddd", get "aa"
*/




/////////////////////          Leetcode 1910
/*
     Input: s = "daabcbaabcbc", part = "abc"
     Output: "dab"
     Explanation: The following operations are done:
     - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
     - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
     - s = "dababc", remove "abc" starting at index 3, so s = "dab".
     Now s has no occurrences of "abc".
/*
     void removeOccurrences(string s, string part) {
          int n = s.length();
          int i = 0;
          while(i<n){
               int index = s.find(part);
               bool foundOrNot = index!=string::npos ? true:false;
               if(foundOrNot){
                    s.erase(index,part.length());
               }
               i++;
          }
          cout<<s<<endl;
     }
*/


/////////////////////          Leetcode 680 (Valid Palindrome 2)
/*
     Given a string s, return true if the s can be palindrome after deleting at most one character from it.

     Input: s = "abca"
     Output: true
     Explanation: You could delete the character 'c'.
/*
      
*/


int main(){
     string s = "axxxxyyyyb";
     string part = "xy";
     // removeOccurrences(s,part);
     

     return 0;
}