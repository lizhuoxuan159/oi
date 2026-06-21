#include <bits/stdc++.h>
using namespace std;
bool v[50][50];
int s[50][50];
int r,c;
int cnt;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
void dfs(int x,int y){
	if(x==r&&y==c){
		cnt+=s[r][c];
		return;
	}
	int m=0;
	cnt+=s[x][y];
	v[x][y]=1;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(!v[nx][ny]&&nx>0&&nx<=r&&ny>0&&ny<=c){
			m=max(m,s[nx][ny]);
		}
	}
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(s[nx][ny]==m&&!v[nx][ny]&&nx>0&&nx<=r&&ny>0&&ny<=c){
			dfs(nx,ny);
			return;
		}
	}
}
int main(){
	cin >> r >> c;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin >> s[i][j];
		}
	}
	dfs(1,1);
	cout << cnt;
}
