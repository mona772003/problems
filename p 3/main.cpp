#include <iostream>

using namespace std;

int main()
{
    cout << "Hello user enter num!" << endl;
    int x ;
    int n ;
    cin>>n;
    int arry [n];
    double sum;
    for ( int x=0 ; x<n ; x++){
        cin >> arry [ x];
        sum+=arry [x];

    }
    cout <<( sum/n);







    return 0;
}
