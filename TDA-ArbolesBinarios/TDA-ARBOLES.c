#include <TDA-ARBOLES.h>

nodoArbol * inicializarArbol ()
{
    return NULL;
}

nodoArbol * crearArbol(int dato)
{
    nodoArbol * nuevo = (nodoArbol*)malloc(sizeof(nodoArbol));

    nodoArbol->dato = dato;
    nodoArbol->izq = NULL;
    nodoArbol->der = NULL;

}

nodoArbol * buscarNodo (nodoArbol * arbol, int buscar)
{
    nodoArbol * rta = NULL;

    if(arbol->dato == buscar)
    {
        rta = buscar;
    }
    else
    {
        if(nodoArbol->dato > buscar)
        {
            rta=buscarNodo(arbol->izq,buscar);
        }
        else
        {
            rta = buscarNodo(arbol->der,buscar);
        }
    }
     return rta;
}

nodoArbol * insertarNodo_Ordenado_Distinto (nodoArbol * arbol, nodoArbol * nuevo)
{
    if(!arbol)
    {
        arbol = nuevo;
    }
    else
    {
        if(arbol->dato < nuevo->dato)
        {
            arbol->izq = insertarNodo(arbol->izq,nuevo);
        }
        else if (arbol->dato > nuevo->dato)
        {
            arbol->der = insertarNodo(arbol->der,nuevo);
        }
    }
    return arbol;
}

nodoarbol * insertarNodo_Ordenado_Crear (nodoArbol * arbol, int dato)
{
    if(!arbol)
    {
        arbol = crearArbol(dato);
    }
    else
    {
        if(arbol->dato < dato)
        {
            arbol->izq = insertarNodo_Ordenado_Crear(arbol->izq, dato);
        }
        else
        {
            arbol->der = insertarNodo_Ordenado_Crear(arbol->der,dato);
        }
    }
    return arbol;
}

void Mostrar_preOrden(nodoArbol * arbol)
{
    if(arbol)
    {
        printf("%d", arbol->dato);
        Mostrar_preOrden(arbol->izq);
        Mostrar_preOrden(arbol->der);
    }
}

void Mostrar_inOrden(nodoArbol * arbol)
{
    if(arbol)
    {
        Mostrar_inOrden(arbol->izq);
        printf("%d", arbol->dato);
        Mostrar_inOrden(arbol->der);
    }
}

void Mostrar_posOrden(nodoArbol * arbol)
{
    if(arbol)
    {
        Mostrar_posOrden(arbol->izq);
        Mostrar_posOrden(arbol->der);
        printf("%d", arbol->dato);
    }
}















