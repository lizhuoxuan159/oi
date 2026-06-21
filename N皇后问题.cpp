#include <bits/stdc++.h>
using namespace std;
int n,d[10086];
bool v[100][100];
bool b[100];
int cnt=0;
bool veify(int x,int y){
	for(int i=1;i<=x-1;i++){
		for(int j=1;j<=n;j++){
			if(x-i==y-j){
				if(v[i][j]==1){
					return false;
				}
			}
		}
	}
	for(int i=1;i<=x-1;i++){
		for(int j=1;j<=n;j++){
			if(x+y==i+j){
				if(v[i][j]==1){
					return false;
				}
			}
		}
	}
	return true;
}
void dfs(int step){
	if(step==n+1){
		cnt++;
		for(int i=1;i<=n;i++){
			cout << setw(5) << d[i];
		}
		cout << endl;
	}
	for(int i=1;i<=n;i++){
		if(veify(step,i)&&!b[i]){
			d[step]=i;
			v[step][i]=1;
			b[i]=1;
			dfs(step+1);
			v[step][i]=0;
			b[i]=0;
		}
	}
}
int main(){
	cin >> n;
	dfs(1);
	if(cnt==0){
		cout << "no solute!";
	}
}
