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

// Problem? CAPS

// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;
// int main (){
//     string word;
//     cin>>word;

//     bool should_change = true;
//     for(int i = 1 ; i<word.length() ; i++){
//         if(islower(word[i])){
//             should_change = false;
//             break;
//         }
//     }
//     if(should_change){
//         for(int i = 0; i<word.length() ; i++){

//             if(islower(word[i])){
//                 word[i] = toupper(word[i]);
//             }else{
//                 word[i] = tolower(word[i]);
//             }
//         }
//     }
//     cout<<word;
//     return 0;
// }

/// Xenia and Ringroad

// #include <iostream>
// using namespace std;
// int main()
// {
//     long long n, m;
//     cin >> n >> m;
//     long long time = 0;
//     long long target;
//     long long current = 1;

//     for (long long i = 0; i < m; i++)
//     {
//         cin >> target;
//         if (target >= current)
//         {
//             time += target - current;
//             current = target;
//         }
//         else
//         {
//             time += (n - current) + target;
//             current = target;
//         }
//     }

//     cout << time;
//     return 0;
// }

// Dragons?

// #include <iostream>
// #include <vector>
// using namespace std;
// void bubbleSort(vector<int> &vec, int n, vector<int> &bonus)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {

//             if (vec[j] > vec[j + 1])
//             {
//                 swap(vec[j], vec[j + 1]);
//                 swap(bonus[j], bonus[j + 1]);
//             }
//         }
//     }
// }

// int main()
// {
//     int s, n;
//     cin >> s >> n;
//     vector<int> s_drg(n);
//     vector<int> bonus(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> s_drg[i];
//         cin >> bonus[i];
//     }
//     bubbleSort(s_drg, n, bonus);

//     for(int i = 0; i< n ; i++){
//         if(s>s_drg[i]){
//             s+= bonus[i];
//         }else{
//             cout<<"NO"<<endl;
//             return 0;
//         }
//     }
//     cout<<"YES"<<endl;

// }

// Problem? Dreamoon and Stairs

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     if (m > n)
//     {
//         cout << -1;
//         return 0;
//     }

//     int step;
//     if (n % 2 == 0)
//     {
//         step = n / 2;
//     }
//     else
//     {
//         step = n / 2 + 1;
//     }
//     while (step % m != 0 and step <= n)
//     {
//         step += 1;
//     }
//     cout << step;
// }