// 1//Theatre square

// #include <iostream>
// using namespace std;
// int main (){
//     long long n,m,a;
//     cin>>n>>m>>a;
//     cout<<(((n%a==0)? n/a: n/a+1) * ((m%a==0)? m/a: m/a+1));
//     return 0;
// }

// 2/ String Task

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

// P// Young Physicist

// #include <iostream>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int x=0, y=0, z=0;
//     int xn, yn, zn ;
//     for(int i=0; i<n; i++){
//         cin>>xn>>yn>>zn;

//         x+=xn;
//         y+=yn;
//         z+=zn;
//     }
//     cout<<((x==0 and y==0 and z==0)? "YES" : "NO");
//     return 0;
// }

// Problem// Chat Room

// #include <iostream>
// using namespace std;
// int main (){
//     string s="hello";
//     string chat;
//     cin>>chat;
//     int index =0;
//     bool boo=false;

//     for(int i=0; i<s.size(); i++){
//         boo=false;
//         for(int j = index;j<chat.size(); j++){
//             if(s[i]==chat[j]){

//                 index=j+1;
//                 boo=true;
//                 break;
//             }else{
//                 boo=false;
//             }
//         }
//         if(!boo){
//         cout<<"NO";
//         return 0;
//     }

//     }
//     if(boo){
//         cout<<"YES";
//     }

// }

// Problem? Expression

// #include <iostream>
// using namespace std;
// int main (){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int arr[6]={a+b+c,a+(b*c),(a*b)+c,a*b*c,a*(b+c),(a+b)*c};
//     int result=0;
//     for(int i=0; i<6; i++){
//         if(arr[i]>=result){
//             result=arr[i];
//         }

//     }
//     cout<<result;
// }

// OR

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main (){
//     int a,b,c;
//     cin>>a>>b>>c;

//     cout<<max({a+b+c,a+(b*c),(a*b)+c,a*b*c,a*(b+c),(a+b)*c});
//     return 0;
// }

// Problem/ Lucky Division

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     if (n % 4 == 0 or n % 7 == 0 or n % 47 == 0 or n % 44 == 0 or n % 77 == 0 or n % 74 == 0 or n % 444 == 0 or n % 447 == 0 or n % 474 == 0 or n % 477 == 0 or n % 744 == 0 or n % 747 == 0 or n % 774 == 0 or n % 777 == 0)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
//     return 0;
// }

