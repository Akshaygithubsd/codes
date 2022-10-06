#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no."<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int var=i;
        for(int j=1;j<=i; j++){
            cout<<var;
            var++;

        }
        cout<<endl;
    }
}