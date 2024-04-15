#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>digits(n);
        for(int i=0;i<n;i++){
            cin>>digits[i];
        }
        vector<int>digit(n);
        for(int i=0;i<n;i++){
            int b_i;
            string moves;
            cin>>b_i>>moves;
            int c_digit=digits[i];
            for(int j=0;j<b_i;j++){
                if(moves[j]=='U'){
                    c_digit=(c_digit-1+10)%10;
                } 
                else if(moves[j]=='D'){
                    c_digit=(c_digit+1)%10;
                }
            }
            digit[i]=c_digit;
        }
        for(int d:digit){
            cout<<d<<" ";
        }
        cout<<endl;
    }
}
