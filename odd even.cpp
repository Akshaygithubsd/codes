#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    while(n!=0){
        int digit = n%10;
         if(digit%2==0){
                    cout<<digit;
                 
        }
        else if(digit%2!=0){
                  cout<<digit; 
        }
          n= n/10;
        
    }
}