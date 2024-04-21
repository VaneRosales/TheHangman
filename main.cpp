#include <iostream>
#include <cstdlib>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#include <fstream>

using namespace std;

void iniciar();
void record();
void log();
void registrar();

int main()
{
    setlocale(LC_ALL,"Spanish");

    int opc;

    do{
        system("cls");
        cout<<"******************************JUEGO DE AHORCADOS********************************"<<endl;
        cout<<"********************************************************************************"<<endl;
        cout<<"OPCIONES:"<<endl;
        cout<<"\t1-INICIAR JUEGO."<<endl;
        cout<<"\t2-VER RECORD DE JUEGADORES."<<endl;
        cout<<"\t3-SALIR.\n"<<endl;
        cout<<"********************************************************************************"<<endl;
        cout<<"Opción: ";
        cin>>opc;
        cout<<"\n******************************************************************************"<<endl;
        switch(opc)
        {
            case 1:
                iniciar();
                break;
            case 2:
                record();
                break;
            case 3:
                cout<<"SALIENDO DEL PROGRAMA...."<<endl;
                break;
            default:
                cout<<"OPCIÓN INVALIDA"<<endl;
                break;

        }
        system("pause");
    }while(opc!=3);
    return 0;
}


void iniciar()
{

    cout<<"**************************************************"<<endl;
    cout<<"\tBIENVENIDO AL INICIO DE JUEGO"<<endl;
    cout<<"\t¿Eres nuevo?"<<endl;
    cout<<"\n\t1-Registrar usuario nuevo."<<endl;
    cout<<"\t2-Ingresar usuario.\n"<<endl;
    cout<<"********************************************************************************"<<endl;
    cout<<"Opción: ";
    cin>>opc;
    cout<<"\n******************************************************************************"<<endl;
    switch(opc)
    {
        case 1:

            break;
        case 2:
            record();
            break;
    }


}
void registrar()
{
    ofstream usuariotxt;
    usuariotxt.open("usuarios.txt" , ios::app);

}
void record()
{
    cout<<"este es el metodo record"<<endl;
}
