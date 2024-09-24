#include <bits/stdc++.h>
using namespace std;

///////////////////  Leetcode 2325 (Decode the Message)
/*
     You are given the strings key and message, which represent a cipher key and a secret message, respectively. The steps to decode message are as follows
     Example 1:
     Input: key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv"
     Output: "this is a secret"
     Explanation: The diagram above shows the substitution table.
     It is obtained by taking the first appearance of each letter in "the quick brown fox jumps over the lazy dog".
*/
string decodeMessage(string key, string message) {
     char start = 'a';
     char mapp[300] = {0}; // space complexity as O(1) only

     for(auto ch:key){
          if(ch!=' ' && mapp[ch]==0){   // if ch is not space and mapp[ch]==0 means that the char is not mapped earlier
               mapp[ch] = start;
               start++;
          }
     }

     string ans;
     for(auto ch:message){
          if(ch == ' '){
               ans.push_back(' ');
          }else{
               ans.push_back(mapp[ch]);
          }
     }
     return ans;
}
     


int main(){

     return 0;
}