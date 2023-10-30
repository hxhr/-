/*2250748 信02 王渝鹮*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
    double r, h;
    const double Pi = 3.14159; 
    
    
    cout << "请输入半径和高度"<<endl;
    cin >> r;
    cin >> h;

   
    double c = 2 * Pi * r;
    double s = Pi * r * r;

   
    cout << fixed << setprecision(2);  
    cout << "圆周长     : " << c << endl;
    cout << "圆面积     : " << s << endl;

   
    double S = 4 * Pi * r * r;
    double V = 4.0 / 3.0 * Pi * r * r * r; 
    cout << "圆球表面积 : " << S<< endl;
    cout << "圆球体积   : " << V<< endl;

    
    double V_c = s * h;
    cout << "圆柱体积   : " << V_c << endl;

    return 0;
}