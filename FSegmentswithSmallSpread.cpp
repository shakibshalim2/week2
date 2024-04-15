#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    long long count_segments=0;
    deque<int>minD,maxD;
    int l=0;
    for(int r=0;r<n;r++){
        while(!minD.empty()&&a[minD.back()]>=a[r])
            minD.pop_back();
        minD.push_back(r);
        while(!maxD.empty()&&a[maxD.back()]<=a[r])
            maxD.pop_back();
        maxD.push_back(r);
        while(a[maxD.front()]-a[minD.front()]>k){
            l++;
            if(minD.front()<l)minD.pop_front();
            if(maxD.front()<l)maxD.pop_front();
        }
        count_segments+=(r-l+1);
    }
    cout<<count_segments<<endl;
}
