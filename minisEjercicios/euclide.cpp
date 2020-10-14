#include <iostream>
#include <math.h>
using namespace std;

int mcd(int a, int b){
    int resultado;
    if(b == 0){
        resultado = a;
    }else
    {
        resultado = mcd(b, a%b);
    }
    return resultado;
}
int main(int argc, char const *argv[])
{
    int uno, dos;
    do
    {
        cout << "Primer Valor: ";
        cin >>uno;
    } while (uno <= 1);
    do
    {
        cout << "Segundo Valor: ";
        cin >> dos;
    } while (dos <=1 && dos < uno);
    cout << "El mcd entre " << uno << " y " << dos << " es:" << mcd(uno,dos) << "\n";
    return 0;
}
