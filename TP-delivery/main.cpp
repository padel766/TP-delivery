#include <iostream>
#include <clocale>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <rlutil.h>
using namespace std;
using namespace rlutil;
#include "prototipos.h"
#include "funciones.h"
#include "funciones_platos.h"
#include "funciones_clientes.h"
#include "funciones_pedidos.h"
#include "funciones_configuracion.h"

int main()
{
    setBackgroundColor(DARKGREY);
    setColor(YELLOW);
    saveDefaultColor();
    setlocale(LC_ALL,"Spanish");
    int op;

    do{
        op = menu_principal();

        switch(op)
        {
            case 1:
                {
                    seccion_platos();
                }break;
            case 2:
                {
                    seccion_clientes();
                }break;
            case 3:
                {
                    seccion_pedidos();
                }break;
            case 4:
                {
                    ///menu_reportes();
                }break;
            case 5:
                {
                    seccion_configuracion();
                }break;
            case 0:{}break;
            default:
                {
                    if(!(menu_reintentar()))op=0;
                }break;
        }

    }while(op!=0);

    cls();
    cout<<"Gracias por utilizar Lara, te esperamos pronto!!!"<<endl;

return 0;
}
