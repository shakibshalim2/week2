#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s,int x) {
    int n=s.length();
    if(x==n)
    return false;
    unordered_map<char,int>freq;
    for(char c:s){
       freq[c]++;
    }
    int count=0;
    for(auto &a:freq){
        if(a.second%2==1){
            count++;
        } 
    }
    if(count<=1){
        return true;
    }
      return x>=count-1;
}

int main() {
    int t;
    cin>>t;
    vector<string>results;

    while(t--){
        int n,k;
        string s;
        cin>>n>>k>>s;
        if(palindrome(s,k)){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    for(string &ans:results){
        cout<<ans<<endl;
    }
    return 0;
}
