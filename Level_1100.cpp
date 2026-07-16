//Problemm ? TAXI

#include <iostream> 
using namespace std;
int main (){
    int n;
    int sum = 0;
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        int num;
        cin>>num;
        sum += num;
    }
    if(sum % 4 == 0){
        
    cout<<sum/4;
    }else{
        
    cout<<(sum/4) + 1;
    }
    return 0;
}