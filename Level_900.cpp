//Football

// #include <iostream>
// using namespace std;
// int main (){
//     string players;
//     cin>>players;
//     bool dangerous=false;
//     int n=players.size();
//     for(int i=0 ; i<=n-7 ;i++){
//         int sum=0;
//         for(int j=i ;j<n;j++){
//             if(players[i]==players[j]){
//                 sum++;
//             }else{
//                 break;
//             }
//         }
//         if(sum>=7){
//             dangerous = true;
//             break;
//         }
//     }
//     cout<<((dangerous==true)? "YES" : "NO");
//     return 0;
// }





//OR

#include <iostream>
using namespace std;
int main (){
    string str;
    cin>>str;
    int streak=1;
    for(int i=1;i<str.size(); i++){
        if(str[i]==str[i-1]){
            streak++;
        }else{
            streak=1;
        }

        if(streak>=7){
            cout<<"YES";
            return 0;
        }
    }
    
    cout<<"NO";
    return 0;
}