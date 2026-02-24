#include<bits/stdc++.h>
#include<cctype>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
string c;
getline(cin>>ws,c);
bool flag=false;
for(int i=0;i<c.size();i++){
    if(i==0){
       if(isdigit(c[i])){
        cout<<"Invalid variable name"<<endl;
        break;
    }else{
    flag=true;
    }
    }
    else if(i>0){

    if(c.at(i)=='$'||c.at(i)=='_'){
        flag=true;


    }
    else if(c.at(i)=='!'||c.at(i)=='@'||c.at(i)=='#'||c.at(i)=='$'||c.at(i)=='%'||c.at(i)=='^'){
    cout<<"Invalid variable name"<<endl;
    flag=false;
        break;
    }else if(c.at(i)==' '){
    cout<<"Invalid variable name"<<endl;
    flag=false;
        break;
    }
    else{
    flag=true;
    }
    }


}
if(flag){
    cout<<"Valid variable name"<<endl;
}

return 0;
}

