#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n)
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>noDuplicate
    for(int i=0;i<n;i++){
        if(a[i]!=x){
            noDuplicate.push_back(a[i]);
        }
        cout<<noDuplicate[i];
    }
}