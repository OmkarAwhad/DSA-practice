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
*/
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
      class Solution {
     public:
     bool palindrome(string s,int l, int h){
          int n = s.length();
          while (l<=h){
               if(s[l] == s[h]){
                    l++;
                    h--;
               }else{
                    return false;
               }
          }
          return true;
     }

     bool validPalindrome(string s) {
          int n = s.length();
          int l=0, h=n-1;
          while(l<=h){
               if(s[l] == s[h]){
                    l++;
                    h--;
               }else{
                    // string temp = s;
                    // if(palindrome(temp.erase(l,1)) || palindrome(temp.erase(h,1))){
                    //     return true;
                    // }else{
                    //     return false;
                    // }
                    bool ans1 = palindrome(s, l+1, h);
                    bool ans2 = palindrome(s, l, h-1);
                    return ans1||ans2;
               }
          }
          return true;


          // int i = 0;
          // int n = s.length();
          // while(i<n){
          //     string og = s;
          //     if(palindrome(s)==true){
          //         return true;
          //     }else{
          //         string temp = og.erase(i,1);
          //         // cout<<"1st removal : "<<og<<endl;
          //         if(palindrome(temp) == true){
          //             // cout<<"True ans : "<<og<<endl;
          //             return true;
          //         }
          //     }
          //     i++;
          // }
          // return false;
     }
     };
*/
/*
     Approach ===> Two pointers approach
     If the chars match then increment the low and decrement the high
     else remove one elm separately and returns its ans
*/



/////////////////////          Leetcode 539
/*
     Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.

     Example 1:
     Input: timePoints = ["23:59","00:00"]
     Output: 1

     Example 2:
     Input: timePoints = ["00:00","23:59","00:00"]
     Output: 0
*/

int findMinDifference(vector<string>& timePoints) {
     int n = timePoints.size();
     vector<int> temp;
     int hours = 0, minutes = 0;
     for(auto val:timePoints){
          hours = stoi(val.substr(0,2));
          minutes = stoi(val.substr(3,2));
          temp.push_back(hours*60 + minutes);
     }
     sort(temp.begin(), temp.end());
     
     int minElm = INT_MAX;
     int diff = 0;
     for(int i=0;i<temp.size()-1;i++){
         diff = temp[i+1]-temp[i];
        //  cout<<diff<<endl;
         minElm = min(minElm, diff);
     }
     diff = temp[0]+(24*60)-temp[temp.size()-1];
     minElm = min(minElm, diff);
     
     return minElm;
}




int main(){
     string s = "axxxxyyyyb";
     string part = "xy";
     // removeOccurrences(s,part);
     // cout<<"ok";

     vector<string> time = {"23:59", "00:00"};
     cout<<"Answer : "<<findMinDifference(time)<<endl;

     

     return 0;
}
