#include<iostream>
#include<string.h>
using namespace std ;

int main()
{
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    if(s.size()>10)
        {
            cout << s[0]<<s.size()-2<<s[s.size()-1] << endl;
        }
    else
        {
            cout << s << endl;
        }
    }

}
