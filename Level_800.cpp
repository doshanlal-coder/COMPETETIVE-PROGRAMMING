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

//5//Bit++


// #include <iostream>
// using namespace std;
// int  main(){
//     int n;
//     int x=0;
//     string oper;
//     cin>>n;
//     for(int i=1; i<=n ; i++){
//         cin>>oper;
//         ((oper[1]=='+')? x++: x--);
//     }
//     cout<<x;
//     return 0;
// }

//6//Next Round

// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     int n,k;
//     int part=0;
//     vector <int> score;
//     cin>>n>>k;

//     for(int i=0; i<n ; i++){
//         int s;
//         cin>>s;
//         score.push_back(s);
//     }
//     for(int i=0; i<n ; i++){
//        if(score[i]>=score[k-1] and score[i]>0){
//         part++; 
//        }
//     }


//     cout<<part;
//     return 0;
// }


//7// Domino Pilling

// #include <iostream>
// using namespace std;
// int main (){
//     int m, n ;
//     cin>>m>>n;

//     cout<<((n%2==0)? m*(n/2) : m*(n/2)+(m/2));
//     return 0;
// }


//OR
// #include <iostream>
// using namespace std;
// int main (){
//     int m, n ;
//     cin>>m>>n;
//     cout<<(m*n)/2;
//     return 0;
// }


//8/ Boy Or Girl

#include <iostream>
using namespace std;
int main (){
    string name;
    int count=0;
    cin>>name;
    for(char ch='a' ;ch<='z'; ch++){
        for(int i=0; i<name.size(); i++){
            if(ch==name[i]){
                count++;
                break;
            }
        }
    }
    cout<<((count%2==0)? "CHAT WITH HER!": "IGNORE HIM!");
    return 0;
}