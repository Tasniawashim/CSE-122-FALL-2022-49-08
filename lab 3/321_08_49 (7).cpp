#include<iostream>
#include<math.h>
using namespace std ;
int main ()
{
 int i,j,v=0;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>v;
        if(v==1)
        {
        cout<< abs(3-i)+abs(3-j)<<endl;
        }
        }
    }
    return 0;
}


