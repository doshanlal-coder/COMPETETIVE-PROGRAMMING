// Problemm ? TAXI

#include <iostream>
using namespace std;
int main()
{
    int n;
    int one = 0, two = 0, three = 0, four = 0;
    cin >> n;
    int taxi = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            one++;
        }
        if (num == 2)
        {
            two++;
        }
        if (num == 3)
        {
            three++;
        }
        if (num == 4)
        {
            four++;
        }
    }
    taxi+=four;
    taxi+= two/2;
    if(three<one){
        taxi+=three;
        one -= three;
        if(two%2 != 0){
            if(one<=2){
                taxi++;
            }
            else{
                taxi++;
                if((one-2)%4 == 0){
                    taxi = taxi+ (one-2)/4;
                } else{
                    taxi = taxi+ ((one-2)/4) + 1;
                }
            }
        }
    }else{
        taxi+=one;
        three-=one;
        taxi+=three;
        if(two%2 != 0){
            taxi++;
        }

    }
    cout<<taxi;
    return 0;
}