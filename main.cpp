#include <iostream>
#include <math.h>
void rownanieLiniowe(float a2, float b2);
using namespace std;
void obliczanieRownania() {
    float a, b, c;
    cout << "Program liczy pierwiastki równania kwadratowego ax^2+bx+c" << endl;
    cout << "Podaj a = ";
    cin >> a;
    if (!cin.good()) {
        cout<<"Nie wprowadziłeś liczby !!!";
        exit(0);
    }
    cout << "Podaj b = ";
    cin >> b;
    if (!cin.good()) {
        cout<<"Nie wprowadziłeś liczby !!!";
        exit(0);
    }
    cout << "Podaj c = ";
    cin >> c;
    if (!cin.good()) {
        cout<<"Nie wprowadziłeś liczby !!!";
        exit(0);
    }
        cout << "Równanie ma następującą postać " << a << "x^2+" << b << "x+" << c << endl;
        if (a == 0)
            rownanieLiniowe(a, b);
        else {
            float delta;
            delta = b * b - 4 * a * c;
            cout << "DELTA = " << delta << endl;
            if (delta < 0)
                cout << "Równanie nie posiada rozwiązań" << endl;
            else if (delta == 0) {
                float x;
                x = -b * (2 * a);
                cout << "Równanie posiada jedno rozwiązanie x = " << x << endl;
            } else {
                float x1, x2, w1, w2;
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                w1 = -b / (2 * a);
                w2 = (-b + sqrt(delta)) / (2 * a);
                cout << "Współrzędne wierzchołka: w1 = " << w1 << ", w2 = " << w2 << endl;
                cout << "Dwa pierwiastki rzeczywiste: x1 = " << x1 << " oraz x2 =" << x2 << endl;
            }
        }
    }

void rownanieLiniowe(float a2, float b2){
    if (a2==0)
        if (b2==0)
            cout<<"Równanie jest równaniem liniowym i posiada nieskończenie wiele rozwiązań"<<endl;
        else{
            cout<<"Równanie jest równaniem liniowym i nie posiada rozwiązań"<<endl;
            cout<<"Wprowadź y żeby wprowandzić jeszcze raz dane lub dowolny inny znak żeby zakończyć"<<endl;
            char z;
            cin>>z;
            if(z=='y'){
                obliczanieRownania();
            }
        }
    else{
        float x;
        x=-b2/a2;
        cout<<"x wynosi: "<<endl;
    }
}
int main() {
    obliczanieRownania();
    return 0;
}



