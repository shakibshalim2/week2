#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long s;
    cin>>n>>s;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int sum=0;
    int l=0;
    for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>s&&l<=r){
            sum-=a[l++];
        }
        count+=(r-l+1);
    }
    cout<<count<<endl;
}
