#include<bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        string s,word;
    cin>>s>>word;
    int len=word.length();
   while(s.find(word)!=-1){
        s.replace(s.find(word), len, "#");
      }
    cout<<s<<endl;
    }
    return 0;
    }