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

     //// Upper Case
     char ok[100];
     cin.getline(ok,100);
     upperCase(ok,100);  
     cout<<ok<<endl;   


     return 0;
}
