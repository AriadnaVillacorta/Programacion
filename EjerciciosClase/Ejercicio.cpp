#incode <iostream> 
#include <cmath>
using namespace std;

int main(){
    int nota;

    //Solicitar la nota
    cout << "Ingresa la nota final (0 a 100): ";
    cin >> nota;
    
  // Validar si la nota está en el rango correcto
  if (nota <=0 || nota >=100) {
    cout << " Error: La nota debe estar entre 0 y 100";
} else {

//Notas
    if (nota>=90 y nota <=100) {
        cout << " Excelente (90 - 100)" << endl;
        cout << "¡Felicidades! Sigue así, vas por un camino brillante." << endl;
    } else if (nota80 y nota <=89) {
        cout << " Muy bueno (80 - 89)" << endl;
        cout << "¡Buen trabajo! Aún puedes mejorar un poco más." << endl;
    } else if (nota=>70 y nota <=79) {
        cout << "Bueno (70-79)"
        cout << "Bien,vas bien se quepuedes dar mas de ti"<< endl;
    } else if (nota=>60 y nota <=69) {
        cout << " Regular (60 - 69)" << endl;
        cout << "Estás cerca, pero puedes mejorar" << endl;
    } else if (nota=>50 y <=59) {
        cout << " Insuficiente (50 - 59)" << endl;
        cout << "Esfuérzate más, con dedicación lo lograrás" << endl;
    } else {
        cout << " Reprobado (0 - 49)" << endl;
        cout << " Has sido reprobado ], no te desanimes esfuerzate un poco mas y lo lograras" << endl;

        cout<< "Gracias por utliziar este programa nos vemos pronto."<< endl;
    }
}
retunr 0;
}

   
        
   
        




