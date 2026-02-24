#include<bits/stdc++.h>

using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
optimize()
string s;
cin>>s;
int i=1;



for(auto u:s){
    if(u=='+'||u=='-'||u=='*'||u=='/'||u=='='||u=='%'||u=='<'||u=='>'||u=='!'||u=='&'||u=='|'){
        cout<<"operator"<<i<<": "<<u<<endl;
        i++;
    }

}
cout<<"numbers of operators = "<<i-1<<endl;
}
