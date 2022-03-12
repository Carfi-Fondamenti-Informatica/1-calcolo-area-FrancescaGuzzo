#include <iostream>
using namespace std;

int main(){
float a, b, c;
cout << "inserire tre valori reali\n";
cin >> a >> b >> c;

float triangolo=(a*b)/2, quadrato=a*a, rettangolo=a*b, trapezio=((a+b)*c)/2;
cout << "l'area del triangolo è " << triangolo << endl;
cout << "l'area del quadrato è " << quadrato << endl;
cout << "l'area del rettangolo è " << rettangolo << endl;
cout << "l'area del trapezio è " << trapezio << endl;

return 0;
}
