#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr; //aqui solamente regresamos el valor del apuntador *ptr
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a+*b; //sumamos ambas variables del apuntador
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a==b)//usamos if para comparar los apuntadores
    {
        return true;//devolvemos true si es verdadero
    }else//de lo contrario devolvemos false
    {
        return false;
    }
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a==*b)//usamos if para comparar los apuntadores
    {
        return true;//devuelve true si es verdadero
    }else//de lo contrario devuelve false
    {
        return false;
    }
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
//pagina de apoyo para este ejercicio http://www.cplusplus.com/reference/string/string/at/
{
    char letra=a->at(0);//creamos la variable a y usando at(0) podemos obtener la primer letra
    return letra;//devolvemos la letra
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
//pagina de apoyo para este ejercicio http://stackoverflow.com/questions/18326015/palindrome-in-string-c
{
    string polindromo=*a;//creamos un string para almacenar el apuntador *a
    if (polindromo==string(polindromo.rbegin(), polindromo.rend()))//usamos if donde sabremos si la palabra es un polindromo para
    {//esp utilizamos rbegin y rend
        return true;//si la palabra es un polindromo nos devuelve true
    }else//de lo contrario devuelve false
    {
        return false;
    }
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int resultado;//creamos nuestras variables resultado que es donde obtendremos la respuesta, y numeero
    int numero;
    numero=*base;//numero lo igualamos con el apuntador *base
    for(int i=1; i<(*exponente); i++)//usamos for para que recorra el programa y encontrar el exponente
    {
        resultado=(numero)*=(*base);//multiplicamos la variable numero con el apuntador *base
    }
    return resultado;// retornamos el resultado
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
