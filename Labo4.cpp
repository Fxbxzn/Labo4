#include <iostream>
using namespace std;

int main() {
    string usuarioCorrecto = "nombre";
    string contraseñaCorrecta = "1234";
    string usuario, contraseña;
    int intentos = 0;
    bool loginExitoso = false;

    // Validación de usuario con máximo 3 intentos
    while (intentos < 3 && !loginExitoso) {
        cout << "Usuario: ";
        cin >> usuario;
        cout << "Contraseña: ";
        cin >> contraseña;

        if (usuario == usuarioCorrecto && contraseña == contraseñaCorrecta) {
            loginExitoso = true;
        } else {
            intentos++;
            cout << "Credenciales incorrectas. Intento " << intentos << " de 3.\n";
        }
    }

    if (!loginExitoso) {
        cout << "Acceso denegado. Se agotaron los intentos.\n";
        return 0;
    }

    // Menú de calculadora
    int opcion = 0;
    while (opcion != 5) {
        cout << "\nMenu calculadora\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "5. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        int num1, num2, resultado;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingresa el primer numero: ";
            cin >> num1;
            cout << "Ingresa el segundo numero: ";
            cin >> num2;
        }

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                resultado = num1 - num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                resultado = num1 * num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: no se puede dividir entre cero." << endl;
                } else {
                    resultado = num1 / num2;
                    cout << "Resultado: " << resultado << endl;
                }
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
                break;
        }
    }

    return 0;
}
