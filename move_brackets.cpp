#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int minBalance=0;
        int b=0;
        for(char c:s){
            if(c=='('){
                b+=1;
            } 
            else{
                b-=1;
            }
            minBalance=min(minBalance,b);
        }
     cout<<abs(minBalance)<<endl;
    }
    return 0;
}
