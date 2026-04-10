#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
//optimize()
int n,m;
cin>>n>>m;
char a;

for(int i=0;i<m;i++){

    cin>>a;
}
int t;
cin>>t;
char c[n][n];

for(int  i=0;i<n;i++){
    for(int j=0;j<n;j++){
        c[i][j]='X';
    }
}


for(int i=0;i<t;i++){
   int x,y;
   char v;
   cin>>x>>v>>y;
   c[x][y]=v;

}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
int ini;
cin>>ini;
int nf;
cin>>nf;
int f[nf];
for(int i=0;i<nf;i++){
    cin>>f[i];
}
string s;
cin>>s;
int j=0;
int i=0;
int cnt=0;
int fcatch=-1;
bool flag=false;
while(cnt<s.length()){
   if(c[i][j]==s[cnt]){
    i=j;
    fcatch=i;
    cnt++;

    j=0;
   } else{
   j++;
   }



}

for(int i=0;i<nf;i++){
    if(fcatch==f[i]){
        flag=true;
        break;
    }
    else{
        flag=false;
    }
}
if(flag){
    cout<<"Accepted"<<endl;
}else{
cout<<"Not Accepted"<<endl;
}








return 0;
}
