#include<bits/stdc++.h>
using namespace std;
int main(){
    string sen;
    getline(cin, sen);
    string word;
    stringstream ss(sen);
    int isExist=0;
    string jes="Jessica";
    while(ss>>word){
        if(word==jes){;
        isExist=1;
        break;}
    }
    if(isExist==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}