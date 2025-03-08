#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m;cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int x,y;cin>>x>>y;
    x--;y--;
    if(a[x-1][y]!='.'&& a[x+1][y]!='.'
       && a[x][y+1]!='.'&& a[x][y-1]!='.'
       && a[x-1][y-1]!='.'&& a[x+1][y-1]!='.'
       && a[x-1][y+1]!='.'&& a[x+1][y+1]!='.'
       ){
        cout<<"yes"<<endl;
       }else {
       cout<<"no"<<endl;
       }
return 0;
}