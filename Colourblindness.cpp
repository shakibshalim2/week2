#include<bits/stdc++.h>
using namespace std;
string color(string &s){
    string result=s;
    for(char &c:result){
        if(c=='G') 
        c='B';
    }
    return result;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string row1,row2;
        cin>>row1>>row2;
        string norm1=color(row1);
        string norm2=color(row2);
        if(norm1==norm2){
            cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
