#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no."<<endl;
    cin>>n;
    int var=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            cout<<var;
            var++;
        }
        cout<<endl;
    }
}