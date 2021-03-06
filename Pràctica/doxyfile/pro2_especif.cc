/**
 * @mainpage Ejemplo de diseño modular:  Gestión de una lavadora.
 
En este ejemplo se construye un programa modular que ofrece un menú de opciones para gestionar una lavadora. Se introducen las clases <em>Lavadora</em>, <em>Cubeta</em> y <em>Prenda</em>.

Sólo se documentan elementos públicos. En una próxima sesión se verá un ejemplo
de proyecto completamente documentado, incluyendo los elementos privados.
*/

/** @file pro2_s8.cc
    @brief Programa principal para el ejercicio <em>Gestión de una lavadora</em>.
*/

// para que el diagrama modular quede bien se han escrito includes redundantes;
// en los ficheros .hh de la documentación de las clases ocurre lo mismo.
#include "Prenda.hh"
#include "Lavadora.hh"
#include "Cubeta.hh"
#ifndef NO_DIAGRAM // explicado en Prenda.hh
#include "readbool.hh"
#endif

/** @brief Programa principal para el ejercicio <em>Gestión de una lavadora</em>.
*/
int main ()
{
    Cubeta c;
    Lavadora lav;
    //bool col;
    int op;
    cin >> op;
    int pes;
    bool color;
    
    while (op != -8) {
        if (op == -1) {

            cin >> pes;
            color = readbool();
            lav.inicializar(pes, color); //el pes que passem com a paràmetre aquí, és el pes màxim d'una rentadora
        }
        else if (op == -2) {
            cin >> pes;
            color = readbool();
            Prenda p (pes, color);
            lav.anadir_prenda(p);
        }
        else if (op == -3) {
            
        }
//         

}
