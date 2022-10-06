#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no."<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
       int ch=4;
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
}