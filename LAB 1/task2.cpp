#include<bits/stdc++.h>
#include<cctype>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
int arr[]={10,20,30,40,50};
int n= sizeof(arr)/sizeof(arr[0]);
int sum=0;
for(auto u:arr){
    sum+=u;
}
cout<<float(sum/n)<<endl;
return 0;
}
