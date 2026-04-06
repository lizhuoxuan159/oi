#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int u1,u3,u7,u30,u120,u365;
    cin >> u1 >> u3 >> u7 >> u30 >> u120 >> u365;
    int day=0;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x!=0){
            day++;
            if(day>=365){
                sum+=u365;
            }
            else if(day>=120){
                sum+=u120;
            }
            else if(day>=30){
                sum+=u30;
            }
            else if(day>=7){
                sum+=u7;
            }
            else if(day>=3){
                sum+=u3;
            }
            else{
                sum+=u1;
            }
        }
        else{
            day=0;
        }
    }
    cout << sum;
}
