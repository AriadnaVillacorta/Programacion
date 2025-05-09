#include <oistream>
using namespace std;

int main(){
  float num1, num2, resultado;
  char opcion;

  cout <<"ingrse  el primer numero:"; 
  cin >> num1;
  cout << "ingrese el segundo numero:";
  cin >> num2;

  cout << "Seleccione una operacion " << endl;
  cout << "a Suma" << endl;
  cout << "b Resta" << endl;
  cout << "c Multiplicacion" << endl;
  cout << "d Division" << endl;
  cout << "opcion:";
  cin >> opcion;

  // Usar un switch para realizar la operacion matematica segun la eleccioon del usuario switch 
  switch (opcion){
case 'a':
    resultado = num1 + num2;
    cout << " El resultado de la suma es:" << resultado << endl;
    break;
case 'b':
    resultado = num1 - num2; 
    cout << "El  resultado de la resta es:" << resultado << endl;
    break;
case 'c':
     // Verificar si el segundo numero es cero antes de realizar la division
     cout << "El resultadp de la multiplicacion es:" << resultado << endl;
     break;
case 'd':
     // Verificar si el segundo numero es cero antes de realizar la division 
    if (numero != 0)
    {
        resultado = num1 / num2
        cout << " El resultado de la division es:" << resultado << endl;
    }   
    else
    {
        cout << "Error : Division por cero no permitida." << resultado << endl;
    }
    break;
    default;
    cout << " Opccion no valida, por favor elija una opcion del a al d" <<endl;
    return 1; // Return 1 porque es salida temprana del programa al terminar los casos 
}
 // Usar if-else para  verificar si el resultado es positivo, negativo o cero

if( resultado > 0){
    cout << "El resultado es positivo." << endl;
} else if (resultado < 0){
    cout << "El resultado es negativo."<< endl;
}else {
    cout << "El resultado es cero." << endl;
}

 return 0;
}