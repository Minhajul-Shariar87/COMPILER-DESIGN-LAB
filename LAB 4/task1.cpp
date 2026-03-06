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
    int cnt=0;
for(int i=0;i<s.size();i++){
   // cout<<s[i]<<" ";
    if(s[i]=='('){
        if(s[i+1]==')'){

            cnt=1;
            break;
        }else{

        cnt=0;
        break;
        }
       }
}

if(cnt==1) return true;
else return false;
}
int main(){
//ofstream Input("input.txt"); // Go to file then input
//ofstream Valid_Code("valid_code.txt"); //Write Only
ofstream Report("report.txt"); //Read Only
string input;
string s="";
ifstream readfile("input.txt");
int k=1;
int v=0;
int f=0;
int inv=0;
while(getline(readfile,input)){
     s=input;
     bool fflag=false;
     bool vflag=false;
     if(s[s.size()-2]==')'){

        isFunction(s);
        fflag=true;
     }else if(s[s.size()-2]!=')'&& s[s.size()-3]!='('){


        isVariable(s);
        vflag=true;
     }

     if(isVariable(s)&&vflag){
        cout<<"Line: "<<k<<" Variable Declaration"<<endl;
        v++;
        ofstream valid_code("valid_code.txt",ios::app);
        valid_code<<s<<'\n';
        valid_code.close();

     }else if(isFunction(s)&&fflag){
        cout<<"Line: "<<k<<" Function Declaration"<<endl;
        f++;
        ofstream valid_code("valid_code.txt",ios::app);
        valid_code<<s<<'\n';
        valid_code.close();
     }
     else{
     cout<<"Line: "<<k<<" Invalid"<<endl;
     inv++;
     }
     k++;
}

readfile.close();
ofstream report("report.txt",ios::app);
report<<"Summary"<<'\n';
report<<"Total Lines: "<<k-1<<'\n';
report<<"Variable Declarations: "<<v<<'\n';
report<<"Function Declarations: "<<f<<'\n';
report<<"Invalid: "<<inv<<'\n';
report.close();
cout<<"---------------------------Report---------------------------------"<<endl;
ifstream s2("report.txt");
while(getline(s2,input)){
    cout<<input<<endl;
}
s2.close();
cout<<"---------------------------Valid Code---------------------------------"<<endl;

ifstream s3("valid_code.txt");
while(getline(s3,input)){
    cout<<input<<endl;
}
s3.close();






return 0;
}

