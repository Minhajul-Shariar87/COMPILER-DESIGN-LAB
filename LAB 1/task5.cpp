#include<bits/stdc++.h>
#include<cctype>
#include<fstream>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
int n;
cin>>n;
ofstream student("student.txt");
for(int i=1;i<=n;i++){
        string x;
        int y;
    cout<<"Student "<<i<<" name: ";

    cin>>x;
    student<<"Student "<<i<<" name: "<<x<<'\n';
    cout<<"Student "<<i<<" marks: ";
    cin>>y;
    student<<"Student "<<i<<" marks: "<<y<<'\n';

}
student.close();
string text;
ifstream readfile("student.txt");
while(getline(readfile,text)){
    cout<<text<<endl;
}
readfile.close();
}
