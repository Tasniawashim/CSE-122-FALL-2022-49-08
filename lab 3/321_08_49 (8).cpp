// 112A	Pet-ya and Strings
#include<iostream>
using namespace std ;
int main ()
{
    int i;
    string a,b;
    cin>>a>>b;
    for(i=0;i<a.size();i++)
    {
     a[i]=towlower(a[i]);
     b[i]=towlower(b[i]);
    }
    if(a==b)
    cout<<"0"<<endl;
    else
    {
        for(i=0;i<a.size();i++)
        {
        if(a[i]<b[i])
            {
               cout<<"-1"<<endl;
            }
        if(a[i]>b[i])
            {
                cout<<"1"<<endl;
                    break;
            }
        }

    }
    return 0;
}


