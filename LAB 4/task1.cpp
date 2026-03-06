#include<bits/stdc++.h>
#include<fstream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

bool isVariable(string s){
for(int i=0;i<s.size();i++){
if(s[i]==' '){
  if(isalpha(s[i+1])||s[i+1]=='_'){
    return true;
}else{
return false;
}
}

}

}

bool isFunction(string s){
for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        if(s[i+1]!=')'){
            return false;
        }else{
        return true;
        }
       }
}
}
int main(){
//ofstream Input("input.txt"); // Go to file then input
//ofstream Valid_Code("valid_code.txt"); //Write Only
ofstream Report("report.txt"); //Read Only
string input;
string s="";
ifstream readfile("input.txt");
while(getline(readfile,input)){
     s=input;
     if(s[s.size()-1]==')'&&s[s.size()-2]!='('){
        isFunction(s);
     }else if(){
     isVariable(s)
     }
}

Report.close();






return 0;
}

