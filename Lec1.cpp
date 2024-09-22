#include <iostream>
#include <algorithm>
using namespace std;

int findLength(char ch[], int size){
     int length = 0;
     while(ch[length] != '\0'){
          length++;
     }
     return length;
}

void reverseString(char ch[], int size){
     int s = 0;
     int e = findLength(ch,size)-1;
     while(s<e){
          swap(ch[s],ch[e]);
          s++,e--;
     }
     cout<<ch<<endl;
}

void upperCase(char ch[],int size){
     int n = findLength(ch,size);
     int i=0;
     // char ok[100];
     // cout<<int('A');
     while(ch[i]!='\0'){
          char curr = ch[i];
          if(curr>='a' && curr <='z'){
               ch[i] = (curr-'a')+'A';
          } 
          i++; 
     }
     // cout<<ch<<endl;
}

void replaceSpaceWith(char ch[],int size){
     int i = 0;
     while(ch[i] != '\0'){
          if(int(ch[i]) == 32){
               ch[i] = '@';
          }
          i++;
     }
}

bool palindrome(char ch[], int size){
     int s = 0, e = size-1;
     while(s<=e){
          if(ch[s] == ch[e]){
               s++,e--;
          }else{
               return false;
          }
     }
     return true;
}




int main(){
     // char ch[10];
     // cin>>ch;
     // cout<<ch<<endl;

     // char ok[100];
     // cin>>ok;
     // cout<<"Printing ok : "<<ok<<endl;
     /*
          When u Enter "omkar awhad" as ip , then it gives only "omkar" as a op
          Because the delimetor for cin is 
          1. new line \n
          2. space ' '
          3. tab \t

          So we can use "cin.getline(where u want to store the input, maximum size of the input)" to get whole line as input
     */
     // char ok[100];
     // cin.getline(ok,100);
     // cout<<"Printing ok : "<<ok<<endl;

     /// Length of string entered
     // char ok[100];
     // cin.getline(ok,100);
     // int len = findLength(ok,100);
     // cout<<"Length is : "<<len<<endl;

     //// Reverse a string
     // char ok[100];
     // cin.getline(ok,100);
     // reverseString(ok,100);

     // char ok[100];
     // cin.getline(ok,100);
     // int n = findLength(ok,100);

     //// Upper Case
     // upperCase(ok,n);  
     //// Replace space with @
     // replaceSpaceWith(ok,n);
     //// Check Palindrome
     // bool ans = palindrome(ok,n);
     // if(ans){
     //      cout<<"Yes it is a palindrome"<<endl;
     // }else{
     //      cout<<"No it is not a palindrome"<<endl;
     // }




     ////////////////////   Strings   //////////////////

     // string name;  --> initialization
     // same for input as char ch[]
     /*
          When u Enter "omkar awhad" as ip , then it gives only "omkar" as a op
          Because the delimetor for cin is 
          1. new line \n
          2. space ' '
          3. tab \t

          So we can use "getline(cin, name of the variable)" to get whole line as input
     */
     // strings too have null character at end
     // same for output

     // string name;
     // // cin.getline(name,100);
     // getline(cin, name);
     // cout<<name<<endl;



     ///// String operations
     string name;
     getline(cin,name);
     cout<<" Length of String : "<<name.length()<<endl;
     cout<<" String is empty or not : "<<name.empty()<<endl;
     cout<<" Character at specific(1st) index : "<<name.at(1) <<endl;
     cout<<" First character : "<<name.front()<<endl;
     cout<<" Back character : "<<name.back() <<endl;
     // cout<<"  : "<< <<endl;
     // cout<<"  : "<< <<endl;

     string str1 = "omkar ";
     string str2 = "awhad";
     cout<<str1.append(str2)<<endl;

     string temp = "This is a demo line";
     cout<<temp.erase(4,3)<<endl; /// erases 3 char from the 4th index (4,5,6)

     string tp = "omkar awhad";
     string middle = "sandeep ";
     cout<<tp.insert(6,middle)<<endl; /// Inserts middle string at 6th index


     string ok = "nothing";
     ok.push_back('Z');
     cout<<ok<<endl;
     ok.pop_back();
     cout<<ok<<endl;


     string s1 = "Nothing but chicken";
     string s2 = "but";
     cout<<s1.find(s2)<<endl; /// if found then it gives the starting index for the substring in the main string ,,, and if not then it returns a npos(random number)
     // simply use if else, if s1.find(s2)==string::npos then return not found, else found


     cout<<s1.compare(s2)<<endl; /// if matched then it returns 0 and if not matched then it returns -1

     /// to get a substring from a existing string
     string st1 = "This is a timepass line written by me for timepass only";
     string st2 = st1.substr(5,15 );
     cout<<st2<<endl;

     string omkar = "omkar";
     string awhad = omkar;
     cout<<awhad<<endl;






     return 0;
}
