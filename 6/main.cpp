#include <iostream>
#include <string> //for string

using namespace std;

int main()
{
 cout << "Enter a word!" << endl;
    int n; cin >>n;
    for ( int i = 1 ; i <= n; i++)
    {
        string str;cin>>str;
        int len = str .length();
        if (len>10)
    {

        cout<<str [0] << (len-2)<<str [len-1] <<endl;
}
else
{
    cout << str << endl;
}

        }



    return 0;
}
