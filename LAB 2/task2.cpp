#include<bits/stdc++.h>

using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
string s;
cin>>s;
bool flag= false;
for(int i=0;i<s.size();i++){
    if(s[i]=='/'&&s[i+1]=='/'){
        cout<<"single line comment"<<endl;
        flag=true;
        break;
    }else if(s[i]=='/'&&s[i+1]=='*'&&s[s.size()-1]=='/'&&s[s.size()-1-1]=='*'){
        flag=true;
    cout<<"multi line comment"<<endl;
    break;
    }else{
    flag=false;
    }
}
if(!flag){
    cout<<"not comment"<<endl;
}
}

