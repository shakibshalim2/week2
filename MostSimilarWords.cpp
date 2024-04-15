#include<bits/stdc++.h>
using namespace std;
int calculate(string &s1,string &s2){
    int moves=0;
    for(int i=0;i<s1.length();i++){
        moves+=abs(s1[i]-s2[i]);
    }
    return moves;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>w(n);
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        int differ=25*m+1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff=calculate(w[i],w[j]);
                if(diff<differ){
                    differ=diff;
                }
            }
        }
        
        cout<<differ<<endl;
    }

}
