#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'


int main(){

string s;
getline(cin>>ws,s);
int i=1;
for(auto u:s){
    if(u=='('||u==')'||u=='{'||u=='}'||u=='['||u==']'||u==','||u==';'){
        cout<<"delimeter "<<i<<":"<<u<<endl;
        i++;
    }
}
cout<<"number of delimeters= "<<i-1<<endl;

return 0;
}

