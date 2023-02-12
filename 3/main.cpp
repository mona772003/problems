#include <iostream>

using namespace std;
void swap (int& x,int& y, int& z){
int temp=x;
x=y;
y=z;
z=temp;
}
int main()
{
    int x,y,z;
    int temp=x;{
x=y;
y=z;
z=temp;
}

    cin >>x>>y>>z;
    swap (x,y,z);
    cout << "" <<z<<y<<x<< endl;





    return 0;
}
