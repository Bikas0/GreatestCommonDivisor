
/*<----------Hi, I'm Bikas----------->
*/
#include<bits/stdc++.h>

using namespace std;

int greatest_common_divisor( int a, int b)
{
    int remainder;

    if(b==0)
    {
        return a;
    }
    remainder = a%b;

    return greatest_common_divisor( b, remainder);
}
int main()
{

    int a,b,common_divisor;

    cin>>a>>b;

    common_divisor = greatest_common_divisor(a,b);

    cout<<common_divisor;

    return 0;
}
