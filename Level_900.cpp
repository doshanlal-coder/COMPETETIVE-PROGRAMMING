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

// Problem//Gravity flip

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

// PRoblem// even odds

// #include <iostream>
// using namespace std;
// int main()
// {
//     long long n, k;
//     cin >> n >> k;
//     long long odds = (n + 1) / 2;
//     if (k <= odds)
//     {
//         cout << (2 * k - 1);
//     }
//     else
//     {
//         cout << 2 * (k - odds);
//     }
//     return 0;
// }

// Problem?? HQ9+

// #include <iostream>
// using namespace std;
// int main (){
//     string code;
//     cin>>code;
//     for(int i=0; i<code.length();i++){
//         if(code[i]=='H' || code[i]=='Q' || code[i]=='9'){
//             cout<<"YES";
//             return 0;
//         }
//     }
//     cout<<"NO";
//     return 0;
// }

// Problem ? Dubstep

// #include <iostream>
// using namespace std;
// int main()
// {
//     string dubstep ;
//     cin>>dubstep;
//     string news = "";

//     while(dubstep.length() >= 3 && dubstep[0] == 'W' && dubstep[1] == 'U' && dubstep[2] == 'B'){
//         dubstep.erase(0,3);
//     }
//     for(int i = 2; i<dubstep.length(); i++){
//         if(dubstep[i-2] == 'W' && dubstep[i-1] == 'U'  && dubstep[i] == 'B'){

//             dubstep[i-2] = 'a';
//             dubstep[i-1] = 'a';
//             dubstep[i] = 'a';
//         }
//     } 
//     for(int i = 1; i< dubstep.length()+1; i++){
//         if (i == dubstep.length()) {
//             if(dubstep[i-1] != 'a') {
//                 news += dubstep[i-1];
//             }
//             break; 
//         }
//         if(dubstep[i-1] == 'a' && dubstep[i] == 'a'){
//             continue;
//         }
//         if(dubstep[i-1] == 'a' && dubstep[i] != 'a'){
//             news+= " ";
//         }
//         if(dubstep[i-1] != 'a'){
//             news+= dubstep[i-1];
//         }
//     } 

//     cout<<news;
// }

//OR
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string dubstep;
//     cin >> dubstep;

//     bool isFirstWord = true;

//     for (int i = 0; i < dubstep.length(); i++) {
//         // Check if the next 3 characters form "WUB"
//         if (i + 2 < dubstep.length() && dubstep[i] == 'W' && dubstep[i+1] == 'U' && dubstep[i+2] == 'B') {
//             i += 2; // Skip the "WUB" (the loop's i++ will make it a total skip of 3)
            
//             // If we already printed a word, we might need a space before the next one
//             if (!isFirstWord) {
//                 cout << " ";
//                 isFirstWord = true; // Reset so we don't print multiple spaces for consecutive WUBs
//             }
//         } else {
//             cout << dubstep[i];
//             isFirstWord = false; // We just printed a character, so the first word has started
//         }
//     }

//     return 0;
// }


//Problem ? Puzzles

#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n, m;
    int arr[m];
    cin>>n>>m;
    for(int i = 0; i<m ; i++){
        cin>>arr[i];
    }
    sort(arr, arr+ sizeof(arr)/ sizeof(arr[0]));

    cout<<arr[m]-arr[0];
    return 0;

}