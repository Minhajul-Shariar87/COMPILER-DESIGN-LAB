#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_wtdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
char operators[]={'+','-','*','/'};

bool start_end(string x){
for(int i=0;i<x.size();i++){
    if(x[0]=='+'||x[0]=='-'||x[0]=='*'||x[0]=='/'){
        return true;
    }else{
    return false;
    }
    return false;
}
}

bool operator_is_consecutive(string x){
    int cnt=0;

for(int i=0;i<x.size();i++){
    for(auto u:operators){
        if(x[i]==u){
               // cout<<x[i]<<endl;
                for(auto k:operators){
                    if(x[i+1]==k){

                        cnt=1;
                    }
                }

        }
    }

}

if(cnt==1)return true;
else return false;
}
bool operands_is_consecutive(string x){
    int cnt=0;

for(int i=0;i<x.size();i++){


    for(char j='A';j<='Z';j++){
        if(x[i]==j){

            for(char Z='A';Z<='Z';Z++){
            if(x[i+1]==Z){
               cnt=1;

            }
            }

        }
    }
}
if(cnt==1){return true;}
else{return false;}
}





int main(){

string x;
getline(cin>>ws,x);

start_end(x);
operator_is_consecutive(x);
operands_is_consecutive(x);

if(start_end(x)||operands_is_consecutive(x)||operator_is_consecutive(x)){
    cout<<"Invalid"<<endl;
}else{
cout<<"Valid"<<endl;
}


return 0;
}

