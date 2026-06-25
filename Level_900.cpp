// Football

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

// OR

// #include <iostream>
// using namespace std;
// int main (){
//     string str;
//     cin>>str;
//     int streak=1;
//     for(int i=1;i<str.size(); i++){
//         if(str[i]==str[i-1]){
//             streak++;
//         }else{
//             streak=1;
//         }

//         if(streak>=7){
//             cout<<"YES";
//             return 0;
//         }
//     }

//     cout<<"NO";
//     return 0;
// }

// Problem// Twins

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> vec(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> vec[i];
//     }
//     sort(vec.begin(), vec.end());

//     int coin=1;

//     for(int i=0;i<n ; i++){
//         int left_sum=0;
//         int right_sum=0;

//         for(int j=0; j<n-coin; j++){
//             left_sum+=vec[j];
//         }
//         for(int j=n-coin; j<n; j++){
//             right_sum+=vec[j];
//         }
//         if(right_sum>left_sum){
//             cout<<coin;
//             break;
//         }
//         coin++;

//     }
//     return 0;
// }


//Problem//Gravity flip

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     vector <int> vec(n);
//     for(int i=0; i<n; i++){
//         cin>>vec[i];
//     }
//     sort(vec.begin(),vec.end());

//     for(int i=0; i<n; i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }