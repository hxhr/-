/*2250748 ��02 �����q*/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
    double r, h;
    const double Pi = 3.14159; 
    
    
    cout << "������뾶�͸߶�"<<endl;
    cin >> r;
    cin >> h;

   
    double c = 2 * Pi * r;
    double s = Pi * r * r;

   
    cout << fixed << setprecision(2);  
    cout << "Բ�ܳ�     : " << c << endl;
    cout << "Բ���     : " << s << endl;

   
    double S = 4 * Pi * r * r;
    double V = 4.0 / 3.0 * Pi * r * r * r; 
    cout << "Բ������ : " << S<< endl;
    cout << "Բ�����   : " << V<< endl;

    
    double V_c = s * h;
    cout << "Բ�����   : " << V_c << endl;

    return 0;
}