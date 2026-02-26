#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_wtdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'

void checkExpression(string x){
bool flag=false;
for(int i=0;i<x.size();i++){
    if(x[0]=='+'&&x[1]=='+'&&x[2]=='+'||x[0]=='-'&&x[1]=='-'&&x[2]=='-'){
        flag=false;
    }
   else if(x[0]=='+'&&x[1]=='+'||x[0]=='-'&&x[1]=='-'){
        flag=true;
    }else if(x[x.size()-1]=='+'&&x[x.size()-2]=='+'&&x[x.size()-1]=='-'&&x[x.size()-2]=='-'){
    flag= true;
    }else{
    flag =false;
    }
}
if(flag){
    cout<<"Valid"<<endl;
}else{
    cout<<"Invalid"<<endl;
}
}


int main(){

string x;
cin>>x;
checkExpression(x);

return 0;
}
