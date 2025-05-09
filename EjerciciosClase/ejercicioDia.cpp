#include <iostream>
using namespace std;

int main() {
    int opcion;
    string clima;
    char otraActividad;

    cout << "=== ACTIVIDADES DEL FIN DE SEMANA ===" << endl;

    // Clima
    cout << "¿Cómo estaba el clima? (soleado, nublado, lluvioso): ";
    cin >> clima;

    // Primera actividad
    cout << "\nSelecciona qué hiciste primero:" << endl;
    cout << "1. Caminar por el bosque" << endl;
    cout << "2. Comer en un restaurante" << endl;
    cout << "3. Descansar al aire libre" << endl;
    cout << "Opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "\nCaminaste por el bosque. ¡Muy buen ejercicio!" << endl;
            if (clima == "soleado")
                cout << "El clima fue perfecto para caminar." << endl;
            else
                cout << "A pesar del clima, lograste moverte. Bien hecho." << endl;
            break;
        case 2:
            cout << "\nDisfrutaste una buena comida en el restaurante." << endl;
            if (clima == "lluvioso")
                cout << "Buena decisión quedarse bajo techo." << endl;
            else
                cout << "Qué buen día para salir a comer." << endl;
            break;
        case 3:
            cout << "\nDescansaste al aire libre. ¡Buen momento para relajarte!" << endl;
            if (clima == "soleado")
                cout << "Perfecto para tomar aire fresco." << endl;
            else
                cout << "Aun con el clima, el descanso fue valioso." << endl;
            break;
        default:
            cout << "\nOpción no válida." << endl;
            return 0;
    }

    // Preguntar si hizo algo más
    cout << "\n¿Hiciste algo más? (s/n): ";
    cin >> otraActividad;

    if (otraActividad == 's' || otraActividad == 'S') {
        int extra;
        cout << "\n¿Qué otra cosa hiciste?" << endl;
        cout << "1. Tomé fotos" << endl;
        cout << "2. Hablé con mi mamá" << endl;
        cout << "3. Me fui a casa" << endl;
        cout << "4. Llegué al cubículo a reflexionar" << endl;
        cout << "Opción: ";
        cin >> extra;

        switch (extra) {
            case 1:
                cout << "\nTomaste fotos. ¡Eso es creatividad al máximo!" << endl;
                if (clima == "nublado")
                    cout << "La luz suave es ideal para fotografía." << endl;
                else
                    cout << "Seguro capturaste buenos momentos." << endl;
                break;
            case 2:
                cout << "\nTuviste una conversación con tu mamá. ¡Qué importante!" << endl;
                cout << "Compartir tiempo con la familia siempre suma." << endl;
                break;
            case 3:
                cout << "\nVolviste a casa después de una buena jornada." << endl;
                break;
            case 4:
                cout << "\nLlegaste al cubículo. Excelente momento para reflexionar." << endl;
                break;
            default:
                cout << "\nOpción adicional no válida." << endl;
        }
    } else {
        cout << "\nGracias por compartir tu actividad. ¡Buen fin de semana!" << endl;
    }

    return 0;
}
