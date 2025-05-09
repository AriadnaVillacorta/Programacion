#include <iostream>
using namespace std;

int main()
{
    double salariobruto, descuentoseguro, descuentoAFP, renta, a, b, c, d, e, salarioneto, salarioxd, salarioxd2, salarioxd3, sumadescuentos;
    int opcion, paso;

    cout << "Ingrese su salario bruto";
    cin >> salariobruto;

    cout << "-----MENU DESCUENTOS-----" << endl;
    cout << "1.Calcular el descuento del ISSS" << endl;
    cout << "2.Calcular el descuento de AFP" << endl;
    cout << "3.Calcular el descuento de renta" << endl;
    cout << "4.Calcular todos los descuento" << endl;
    cout << "5. Salir";
    cout << "Eliga una opcion";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        if (salariobruto <= 1000 && salariobruto >= 473)
        {
            descuentoseguro = salariobruto * 0.03;
            cout << "Su descuento del seguro es el siguiente:" << descuentoseguro << endl;
        }
        else
        {
            cout << "Los descuentos no aplican." << endl;
        }
        break;
    case 2:
        if (salariobruto > 473)
        {
           descuentoAFP= salariobruto * 0.0725;
            cout << "Su descuento de APF es:" << descuentoAFP << endl;
        }
        else
        {
            cout << "No se le aplico descuento." << endl;
        }
        break;
    case 3:

        (salarioneto = (descuentoseguro + descuentoAFP));
        // Salarioxd es la suma afp y isss y es el resultado de salario neto
        salarioxd = (salariobruto - salarioneto) * 0.1;
        salarioxd2 = (salariobruto - salarioneto) * 0.2;
        salarioxd3 = (salariobruto - salarioneto) * 0.3;

        if (salarioneto < 473 && salarioneto > 0)
        {
            cout << "A usted no se le aplica descuentos" << endl;
        }
        else if (salarioneto >= 473 && salarioneto < 895.25)
        {
            cout << "Su descuento de renta fue del 10%, lo cual es:" << salarioxd << endl;
        }
        else if (salarioneto >= 895.25 && salarioneto < 2038.10)
        {
            cout << "Su descuento de renta fue del 20%, lo cual es:" << salarioxd2 << endl;
        }
        else
        {
            cout << "Su descuento de renta fue del 30% , lo cual es:" << salarioxd3 << endl;
        }
        break;
    case 4:
        if (salariobruto < 473 && salariobruto > 0)
        {
            cout << "A usted no se le aplica descuentos" << endl;
        }
        else if (salariobruto <= 1000 && salariobruto >= 473)
        {
            descuentoseguro = salariobruto * 0.03;
            salarioxd = (salariobruto - salarioneto) * 0.1;
            descuentoAFP = salariobruto * 0.0725;
            cout << "Su descuento del seguro es el siguiente:" << descuentoseguro << endl;
        }
        else if (salarioneto >= 473 && salarioneto < 895.25)
        {
            descuentoseguro = salariobruto * 0.1;
            salarioxd2 = (salariobruto - salarioneto) * 0.1;
            descuentoAFP = salariobruto * 0.0725;
            cout << "Su descuento de renta fue del 10%, lo cual es:" << salarioxd << endl;
        }
        else if (salarioneto >= 895.25 && salarioneto < 2038.10)

        {
            descuentoseguro = salariobruto * 0.2;
            salarioxd2 = (salariobruto - salarioneto) * 0.1;
            descuentoAFP = salariobruto * 0.0725;
            cout << "Su descuento de renta fue del 20%, lo cual es:" << salarioxd2 << endl;
        }
        else
        {
            cout << "Su descuento de renta fue del 30% , lo cual es:" << salarioxd3 << endl;
        }
        break;

    default:
        cout << "Usted decidio salir del programa" << endl;

        return 0;
    }
}