#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "HOLA SOY EL GENERADOR DE NUMEROS ALEATORIOS :)" << endl;
    cout << "A CONTINUACION TE INDICARE UN RANGO Y TENDRAS QUE ADIVINAR ESE NUMERO" << endl;
    cout << "LET'S PLAY" << endl;

    srand(time(0)); // Inicializar la semilla para la generación de números aleatorios

    int numeroAleatorio = rand() % 100 + 1; // Generar número aleatorio en el rango del 1 al 100

    int intento;
    int intentosRealizados = 0;
    int intentosMaximos;
    double porcentajeAcierto;

    cout << "Adivina el numero secreto entre 1 y 100." << endl;
    cout << "Ingresa el numero maximo de intentos: ";
    cin >> intentosMaximos;

    do
    {
        cout << "Introduce tu intento: ";
        cin >> intento;

        intentosRealizados++;

        if (intento < numeroAleatorio)
        {
            cout << "El numero secreto es mayor. Intenta de nuevo." << endl;
        }
        else if (intento > numeroAleatorio)
        {
            cout << "El numero secreto es menor. Intenta de nuevo." << endl;
        }
        else
        {
            cout << "¡Felicidades! Adivinaste el numero secreto en " << intentosRealizados << " intentos." << endl;
        }
    } while (intento != numeroAleatorio && intentosRealizados < intentosMaximos);

    if (intento != numeroAleatorio)
    {
        porcentajeAcierto = (intentosMaximos - intentosRealizados) * 100.0 / intentosMaximos;
        cout << "No lograste adivinar el numero. Tu porcentaje de acierto fue: " << porcentajeAcierto << "%" << endl;
    }

    return 0;
}
