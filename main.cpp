#include <iostream>
using namespace std;

//your code goes here
template <typename T>T myMax(T x, T y){ //typename can also be class
    return (x > y) ? x : y; //if true, it's x and if not, it's y
}

int main () {
    double x, y;
    cin>>x>>y;
    int a, b;
    cin>>a>>b;
    cout << myMax(x, y) << endl;
    cout << myMax(a, b) << endl;
}
