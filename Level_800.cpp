//1//Watermelon

// #include <iostream>
// using namespace std;
// int main (){
//     int w;
//     cin>>w;
//     cout<<((w>2 and w<=100 and w%2==0)? "YES" : "NO");
//     return 0;
// }





//2//Way Too Long Words

// #include <iostream>
// #include <string>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     while(n--){
//         string word;
//         cin>>word;
//         cout<<((word.length()>10)? word[0]+to_string(word.length()-2) +word[word.length()-1]:word)<<endl;
//     }
// }



//3//Elephants

// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     cout<<((x/5) + (x%5)/4 + ((x%5)%4)/3 + (((x%5)%4)%3)/2 + ((((x%5)%4)%3)%2)/1);
//     return 0;
// }

// //OR
// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;
//     cout << ((x % 5 == 0) ? x / 5 : x / 5 + 1) << endl;
    
//     return 0;
// }

//4//Team

// #include <iostream>
// using namespace std;
// int main(){
//     int n,Petya, Vasya, Tonya;
//     cin>>n;
//     int p=0;
//     for(int i=1; i<=n; i++){
//         cin>>Petya>>Vasya>>Tonya;
//         if(Petya+Vasya+Tonya >=2){
//             p++;
//         }
//     }
//     cout<<p;
//     return 0;
// }

//5//