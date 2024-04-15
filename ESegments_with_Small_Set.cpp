#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int>freq;
    long long count_segments=0;
    int count=0;
    int l=0;
    
    for(int right=0;right<n;right++){
        if(freq[a[right]]==0)
        count++;
        freq[a[right]]++;
        while(count>k){
            freq[a[l]]--;
            if(freq[a[l]]==0)
                count--;
                l++;
        }
        count_segments+=(right-l+1);
    }
    cout<<count_segments<<endl;
}
