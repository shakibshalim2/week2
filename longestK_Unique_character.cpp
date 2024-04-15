#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int longestKSubstr(string s, int k) {
        int n=s.length();
        if(k==0) 
        return -1;
        unordered_map<char,int>freq;
        int left=0,maxLen=-1;
        int uniqueCount=0;
        for(int right=0;right<n;right++){
            if(freq[s[right]]==0){
                uniqueCount++;
            }
            freq[s[right]]++;
            while(uniqueCount>k){
                freq[s[left]]--;
                if(freq[s[left]]==0){
                    uniqueCount--;
                }
                left++;
            }
              if(uniqueCount==k){
                maxLen=max(maxLen,right-left+1);
            }
        }
        return maxLen;
    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.longestKSubstr(s,k)<<endl;
    }
    return 0;
}
