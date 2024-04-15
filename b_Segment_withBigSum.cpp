#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long s;
    cin>>n>>s;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum=0;
    int l=0;
    long long countSegments=0;
    
    for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>=s){
            countSegments+=(n-r);
            sum-=a[l];
            l++;
        }
    }
    cout<<countSegments<<endl;
}
