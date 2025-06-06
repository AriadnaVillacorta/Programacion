#include <iostream>
using namespace std;

int main()
{

    int num, contador, repite;

    cout << "Cuanto numeros quiere ingresar?";
    cin >> num;

    int numeros[num];
    for (int i = 0; i < num; i++)
    {

        cout << "Ingrese los numero en la posicion #" << (i + 1) << endl;
        cin >> numeros[i];

    contador =0;
    for ( int a = 0; a < num; a++){
    if (numeros [a ]== numeros[i]){
        contador++;
        }
    } 
    
    cout << "El numero " << numeros[i] << " se repite " << contador << " veces." << endl;
}




   return 0;
}
