#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b){
    if(a<b && a*2<b)
        return 0;

    if(a>b && a>b*2)
        return 0;

    if(!a && !b)
        return 1;

    if((a+b)%3 == 0 && a && b)
        return 1;

    return 0;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        if(solve(a,b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}