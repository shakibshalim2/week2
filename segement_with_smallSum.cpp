#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long s;
    cin>>n>>s;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxL=0;
    long long sum=0;
    int l=0;
    for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>s&&l<=r){
            sum-=a[l++];
        }
        if(sum<=s){
            maxL=max(maxL,r-l+1);
        }
    }
    cout<<maxL<<endl;
    return 0;
}
