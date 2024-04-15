#include<bits/stdc++.h>
using namespace std;
bool spelling(string &s){
    string name="Timur";
    string correct=s;
    sort(correct.begin(),correct.end());
    sort(name.begin(),name.end());
    int c=(correct==name);
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n!=5){
            cout<<"NO"<<endl;
            continue;
        }
        if(spelling(s)){
            cout<<"YES"<<endl;
        } 
        else{
            cout<<"NO"<<endl;
        }
    }
}
