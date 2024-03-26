#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<k;j++){
            int minus=b-i-j;
            if(minus<a&&minus>=0){
                cnt++;
            }
        }
    }
    cout<<cnt;
}