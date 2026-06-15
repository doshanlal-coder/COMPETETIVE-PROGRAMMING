//1//Theatre square

// #include <iostream>
// using namespace std;
// int main (){
//     long long n,m,a;
//     cin>>n>>m>>a;
//     cout<<(((n%a==0)? n/a: n/a+1) * ((m%a==0)? m/a: m/a+1));
//     return 0;
// }

//2/ String Task

// #include <iostream>
// using namespace std;
// int main (){
//     string str;
//     string newStr="";
//     getline(cin,str);
//     for(int i=0; i<str.size();i++){
//         for(char CH='A', ch='a'; CH<='Z',ch<='z';CH++, ch++){
//             if(str[i]==CH){
//                 str[i]=ch;
//             }
//         }
//     }
//     for(int i=0; i<str.size();i++){
//         if(str[i]!='a' and str[i]!='i' and str[i]!='e' and str[i]!='o' and str[i]!='u' and str[i]!='y'){
//             newStr+=str[i];
//         }
//     }
//     str="";
//     for(int i=0; i<newStr.size();i++){
//         str+='.';
//         str+=newStr[i];
//     }


//     cout<<str;
//     return 0;
// }

//P// Young Physicist

#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int x=0, y=0, z=0;
    int xn, yn, zn ;
    for(int i=0; i<n; i++){
        cin>>xn>>yn>>zn;

        x+=xn;
        y+=yn;
        z+=zn;
    }
    cout<<((x==0 and y==0 and z==0)? "YES" : "NO");
    return 0;
}