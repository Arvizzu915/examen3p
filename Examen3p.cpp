#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int posicion = 0;

    int matriz[] =
    {
    1, 3, 1, 4,
    9, 8, 7, 9,
    3, 2, 1, 5
    };
    
    cout << "Posiciones pares: ";
    for (int i = 0; i < 12; i++)
    {
        if (matriz[i] % 2 == 0)
        {
            if (i <= 3)
            {
                posicion = i;
            }
            else if (i > 3 && i <= 7)
            {
                posicion = i + 10 - 4;
            }
            else if (i > 7 && i <= 11)
            {
                posicion = i + 20 -8;
            }
            suma += matriz[i] - posicion;

            cout << posicion << ", ";
        }
    }

    cout << "resultado: " << suma;

}
