#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>f;
        for(int i=0;i<n;i++){
            int value;
            cin>>value;
            f[value]++;
        }
        int oddCnt=0,evenCnt=0;
        for(auto &val:f){
            if(val.second%2==0)
                evenCnt++;
            else
                oddCnt++;
        }
        cout<<oddCnt+(evenCnt/2)*2<<endl;
    }
}
