#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

bool isfloat(float n){
if(n-int(n)>0){
    return true;
}else{
 return false;
}

}
int main(){

string number;
cin>>number;
if(number[0]=='+'||number[0]=='-'){
    number.erase(number.begin());
}
float n= stof(number);


if(isfloat(n)){
    cout<<"Floating literal"<<endl;
}else{
    cout<<"Integer literal"<<endl;
}

return 0;
}
