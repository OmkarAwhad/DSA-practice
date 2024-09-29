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





///////////////////  Leetcode 2391 (Minimum amount of time to collect garbage)
/*
     Input: garbage = ["MMM","PGM","GP"], travel = [3,10]
     Output: 37
     Explanation:
     The metal garbage truck takes 7 minutes to pick up all the metal garbage.
     The paper garbage truck takes 15 minutes to pick up all the paper garbage.
     The glass garbage truck takes 15 minutes to pick up all the glass garbage.
     It takes a total of 7 + 15 + 15 = 37 minutes to collect all the garbage.
*/   
/*   My basic approach (Wrong one but)
int garbageCollection(vector<string>& garbage, vector<int>& travel) {
     int n = garbage.size();
     int total = 0;
     vector<char> val = {'M','P','G'};
     int sum = 0;
     for(auto i:travel){
          sum+=i;
     }
     for(int k=0; k<val.size(); k++){
          char value = val[k];
          for(int i=0; i<n; i++){
               string ch = garbage[i];
               size_t c = count(ch.begin(), ch.end(),value);
               if(c==0 && i-1>=0 && i==n-1){
                    total -= travel[i-1];
               }
               else if(c==0 && total==sum-travel[n-1] && i==n-1){
                    total = 0;
               }

               if(i-1>=0){
                    total = total+c+travel[i-1];
               }else{
                    total = total+c;
               }
          }
          cout<<total<<endl;
     }    
     // for(int i=0; i<n; i++){
     //      string ch = garbage[i];
     //      size_t c = count(ch.begin(), ch.end(),'M');
     //      // cout<<c<<" ";
     //      if(c==0 && i-1>=0 && i==n-1){
     //           total -= travel[i-1];
     //      }

     //      if(i-1>=0){
     //           total = total+c+travel[i-1];
     //      }else{
     //           total = total+c;
     //      }
     // }
     // for(int i=0; i<n; i++){
     //      string ch = garbage[i];
     //      size_t c = count(ch.begin(), ch.end(),'P');
     //      // cout<<c<<" ";
     //      if(c==0 && i-1>=0 && i==n-1){
     //           total -= travel[i-1];
     //      }

     //      if(i-1>=0){
     //           total = total+c+travel[i-1];
     //      }else{
     //           total = total+c;
     //      }
     // }
     // for(int i=0; i<n; i++){
     //      string ch = garbage[i];
     //      size_t c = count(ch.begin(), ch.end(),'G');
     //      // cout<<c<<" ";
     //      if(c==0 && i-1>=0 && i==n-1){
     //           total -= travel[i-1];
     //      }

     //      if(i-1>=0){
     //           total = total+c+travel[i-1];
     //      }else{
     //           total = total+c;
     //      }
     // }
     return total;
}
*/
int garbageCollection(vector<string>& garbage, vector<int>& travel) {
     int n = garbage.size();
     int ans = 0;

     int pickM = 0, pickP = 0, pickG = 0;
     int travelM = 0, travelP = 0, travelG = 0;
     int lastM = 0, lastP = 0, lastG = 0;

     for(int i = 0;i<n;i++){
          string curr = garbage[i];
          for(auto j:curr){
               if(j == 'M'){
               pickM++;
               lastM = i;
               }else if(j == 'P'){
               pickP++;
               lastP = i;
               }else if(j == 'G'){
               pickG++;
               lastG = i;
               }
          }
     }

     for(int i=0;i<lastM;i++){
          travelM += travel[i];
     }
     for(int i=0;i<lastP;i++){
          travelP += travel[i];
     }
     for(int i=0;i<lastG;i++){
          travelG += travel[i];
     }

     ans = (pickM+travelM)+(pickP+travelP)+(pickG+travelG);
     return ans;
}




///////////////  Leetcode 791 (Custom Sort String)
/*
     Input: order = "cba", s = "abcd"
     Output: "cbad"
     Explanation: "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a".
     Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
*/
// class Solution {
// public:
//     static string str;
//     static bool compare(char c1, char c2){
//         return (str.find(c1) < str.find(c2));
//     }

//     string customSortString(string order, string s) {
//         str = order;
//         sort(s.begin(),s.end(),compare);
//         return s;
//     }
// };
// string Solution::str;




/////////////  Leetcode 890 (Find and replace pattern)
/*
     Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
     Output: ["mee","aqq"]
     Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
     "ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.
*/




/////////////  Leetcode 49 (Group anagams)
/*
     class Solution {
     public:
     std::array<int,256> anagram(string s){
          std::array<int,256> mapp = {0};
          for(auto ch:s){
               mapp[ch]++;
          }
          return mapp;
     }

     vector<vector<string>> groupAnagrams(vector<string>& strs) {
          map<std::array<int,256>, vector<string> > mp;
          for(auto s:strs){
               mp[anagram(s)].push_back(s);
          }

          vector< vector<string> > ans;
          for(auto it=mp.begin() ; it!=mp.end() ; it++){
               ans.push_back(it->second);
          }
          return ans;


          ////////////   High complexity
          // map<string, vector<string> > mp;
          // for(auto str:strs){
          //     string s = str;
          //     sort(s.begin(),s.end());
          //     mp[s].push_back(str);
          // }
          // vector< vector<string> > ans;
          // for(auto it=mp.begin() ; it!=mp.end() ; it++){
          //     ans.push_back(it->second);
          // }
          // return ans;
     }
     };
*/

int main(){
     // vector<string> garbage = {"MMM","PGM","GP"};
     // vector<int> travel = {3,10};
     // vector<string> garbage = {"G","P","GP","GG"};
     // vector<int> travel = {2,4,3};
     // cout<<"Time : "<<garbageCollection(garbage,travel)<<endl;

     return 0;
}
