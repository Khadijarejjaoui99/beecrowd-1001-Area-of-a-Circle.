// Solution of 1002 - Area of a Circle in beecrowd
#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    double A, R, n= 3.14159;
    cin >> R;
    A= n*R*R;
    cout<<fixed<<setprecision(4)<<"A="<<A<<endl;
    system("pause");
    return 0;
}