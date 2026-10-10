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

/// Problem ? Football

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     string first, sec;
//     int t1 = 0;
//     int t2 = 0;

//     string s;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;

//         if (i == 0)
//         {
//             first = s;
//             t1++;
//         }
//         else if (s == first)
//         {
//             t1++;
//         }
//         else
//         {
//             sec = s;
//             t2++;
//         }
//     }

//     if (t1 > t2)
//     {
//         cout << first << "\n";
//     }
//     else
//     {
//         cout << sec << "\n";
//     }

//     return 0;
// }

// Problem? C1. Marenol (easy version)

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     while(n--){
//         int l;
//         cin>>l;
//         string a, b;
//         cin>>a>>b;
//         int odd1 = 0, odd0 = 0, even1 = 0, even0 = 0;
        
//         for(int i = 0; i< l; i++){
//             if(i%2 == 1 and a[i] == '1') odd1++;
//             if(i%2 == 1 and b[i] == '1') odd1--;

//             if(i%2 == 0 and a[i] == '1') even1++;
//             if(i%2 == 0 and b[i] == '1') even1--;

//             if(i%2 == 1 and a[i] == '0') odd0++;
//             if(i%2 == 1 and b[i] == '0') odd0--;

//             if(i%2 == 0 and a[i] == '0') even0++;
//             if(i%2 == 0 and b[i] == '0') even0--;
//         }
//         if(odd1 == 0 and odd0 == 0 and even1 == 0 and even0 == 0){
//             cout<<"Yes\n";
//         }else{
//             cout<<"No\n";
//         }
//     }
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//B. Even Modulo Pair
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector <int> v(n);
//         for(int i = 0 ; i < n ; i++){
//             cin>>v[i];
//         }
//         bool flag = true;
//         for(int i = 0 ; i < n-1 ; i++){
//             for(int j = i+1 ; j<n ; j++){
//                 if((v[j]%v[i] )%2 == 0){
//                     cout<<v[i]<<" "<<v[j]<<"\n";
//                     flag = false;
//                     break;
//                 }
                
//             }
//             if(!flag) break;
//         }
//         if(flag) cout<<-1<<"\n";
//     }
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// A. In Search of Convenience

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, y, r;
//         cin >> x >> y >> r;
//         for (int i = -35; i <= 35; i++)
//         {
//             bool flag = false;
//             for (int j = -35; j <= 35; j++)
//             {
//                 if (((x - i) * (x - i)) + ((y - j) * (y - j)) == r * r)
//                 {
//                     cout << i << " " << j << "\n";
//                     flag = true;
//                 }
//                 if (flag)
//                     break;
//             }
//             if (flag)
//                 break;
//         }
//     }
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// B. Did Not Go to Print

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         string s1;
//         cin >> n >> s1;
//         vector<int> notPrinted;
//         vector<int> rem;
//         for (int i = 1; i <= n; i++)
//         {
//             if (s1[i-1] == '1')
//             { // doc is placed on top
//                 notPrinted.push_back(i);
//             }
//             else if (s1[i-1] == '2')
//             {
//                 if (!notPrinted.empty())
//                 {
//                     // print top most
//                     notPrinted.pop_back();
//                     rem.push_back(i);
//                 }
//             }
//         }
//         notPrinted.insert(notPrinted.end(), rem.begin(), rem.end());
//         sort(notPrinted.begin(), notPrinted.end());

//         cout<<notPrinted.size()<<"\n";
//         for(int result: notPrinted) cout<<result<<" ";
//         cout<<"\n";
//     }
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// C.  Unrequited Love

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector <int> audLove(n);
//         for(int i = 0 ; i< n ; i++){
//             cin>>audLove[i];
//         }
//         ll loveUnit = 0;
//         int count = 0;
//         for(int i = 0; i < n-5 ; i++){
//             for(int  j = i+1; j < n-4 ; j++){
//                 if(j<= i+4){
//                     if(j == i+2 or j == i+4) continue;
//                 }
//                 loveUnit = (audLove[i]+audLove[i+2]-audLove[i+4]) - (audLove[j]+audLove[j+2]-audLove[j+4]);
//                 if(loveUnit == 0) count++;
//                 loveUnit =0;

//             }
//         }
//         cout<<count<<"\n";

//     }
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//A. Robot Odd Moves
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         if(b > a+1) cout<<-1<<"\n";
//         else{
//             if(a == b) cout<<a<<"\n";
//             else if(b>a) cout<<b<<"\n";
//             else if(a>b){
//                 if(a%2 == 0 and b%2 == 0) cout<<a<<"\n";
//                 else if(a%2 == 1 and b%2 == 1) cout<<a<<"\n";
//                 else cout<<a+1<<"\n";
//             }
//         }
//     }
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

