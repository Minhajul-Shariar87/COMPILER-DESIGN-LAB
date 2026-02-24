#include<bits/stdc++.h>

using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
string s;
cin>>s;
if(s=="int"||s=="float"||s=="double"||s=="char"||s=="if"||s=="else"||s=="while"||s=="return"){
    cout<<"keyword"<<endl;
}

else{
        bool flag=true;
    for(int i=0;i<s.size();i++){
        if(isalpha(s[0])){
            if(s[i+1]=='_'||isalpha(s[i])||isdigit(s[i])){
               flag=true;
            }
        }else{
        flag=false;
        break;
        }
    }
    if(flag){
    cout<<"identifier"<<endl;
}else{
cout<<"Invalid"<<endl;
}
}

return 0;
}


