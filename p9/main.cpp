#include <iostream>

using namespace std;
int main()
{
    int arr[100000], n, i, max, min ;

cout << "Enter the size of the array: ";
cin >> n;
cout << "Enter the elements of the array: "<< endl;
for (i=0 ; i<n ; i++)
cin >> arr [i];
max =arr [0];
for (i=0; i<n; i++)
{
  if (max <arr[i])
     max=arr[i];
}
min =arr[0];
for (i=0; i <n; i++)
{
   if (min > arr [i])
min =arr [i];
}
cout << "max is:"<< max << endl;
cout  << "minimum is:"<< min << endl;




    return 0;
}
