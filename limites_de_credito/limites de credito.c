#include <iostream>
using namespace std;

int main() {
    int numeroCuenta;
    double saldoInicial, cargos, creditos, limiteCredito;

    cout << "Introduzca el numero de cuenta (o -1 para salir): ";
    cin >> numeroCuenta;

    while (numeroCuenta != -1) {
        cout << "Introduzca el saldo inicial: ";
        cin >> saldoInicial;

        cout << "Introduzca los cargos totales: ";
        cin >> cargos;

        cout << "Introduzca los creditos totales: ";
        cin >> creditos;

        cout << "Introduzca el limite de credito: ";
        cin >> limiteCredito;

        double nuevoSaldo = saldoInicial + cargos - creditos;

        cout << "El nuevo saldo es " << nuevoSaldo << endl;
        cout << "Cuenta: " << numeroCuenta << endl;
        cout << "Limite de credito: " << limiteCredito << endl;
        cout << "Saldo: " << nuevoSaldo << endl;

        if (nuevoSaldo > limiteCredito) {
            cout << "Se excedio el limite de su credito." << endl;
        }

        cout << "Introduzca el numero de cuenta (o -1 para salir): ";
        cin >> numeroCuenta;
    }

    return 0;
}

