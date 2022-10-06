#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
        for(int i=0; i<=n; i=i+1){
        int j=1;
        for( j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}