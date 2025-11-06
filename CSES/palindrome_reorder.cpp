#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    unordered_map<char, int>ump;

    for(auto i:s){
        ump[i]+=1;
    }

    string ans1 = "";
    string ans2 = "";
    char temp = '#';

    for(auto it: ump){

        for(int i=0; i<(it.second)/2; i++){
            ans1.push_back(it.first);
            ans2.push_back(it.first);
        }

        if(it.second%2){
            if(temp!='#'){
                cout<<"NO SOLUTION";
                return 0;
            }
            else
                temp = it.first;
        }
            
    }

    reverse(ans2.begin(), ans2.end());

    if(temp!='#')
        cout<<ans1+temp+ans2;
    else
        cout<<ans1+ans2;

    return 0;
}