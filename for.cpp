#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int v=1;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            cout<<v++;
        }
        cout<<endl;
    }
}