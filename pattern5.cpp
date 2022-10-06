
#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
            
        }
        i++;
        cout<<endl;
        
    }
}
/*for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i;
        
    }
    cout<<endl;*/