#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> a;
    string x;
    while(cin >> x){
        if(x=="0"){
            break;
        }
        bool flag=true;
        for(string i:a){
            if(i==x){
                flag=false;
            }
        }
        a.push_back(x);
        if(flag){
            cout << x;
        }
    }
}
