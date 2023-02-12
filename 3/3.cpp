#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks:\n!";
    cin>>marks;
    if (marks<0 && marks>100) {
            cout << "Wrong!\n";
    } else if (marks>=90){
            cout <<" Excellent \n";
     }else if(marks>=80){
             cout <<"very good\n";
    }else if(marks>=70){
              cout<<"good/n";
    }else if(marks>=60){
              cout<<"acceptable/n";
    }else{
               cout<<"failed";
    }

    return 0;
}
