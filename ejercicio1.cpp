/*Autor: Nayeli Cruz
Fecha: 17/07/2024
Tema: Tipo de dato definido por el usuario
*/

#include<iostream>
using namespace std;

//1)tipo de struct definido por el usuario
struct Libro{
    string codigo;
    string titulo;
    string autor;
    int precio;
};

/*2)Esta función asigna valores predeterminados a los campos de un arreglo de estructuras `Libro`.
libros Un arreglo de estructuras `Libro` que será llenado con los detalles de los libros. 
total Un entero que representa el número total de libros en el arreglo.*/
void AsignarLibros(Libro libros[], int total) {
    libros[0].codigo = "001";
    libros[0].titulo = "Un grito desesperado";
    libros[0].autor = "Carlos Cuauhtemoc Sánchez";
    libros[0].precio = 10;

    libros[1].codigo = "002";
    libros[1].titulo = "Las cruces sobre el agua";
    libros[1].autor = "Joaquin Gallegos Lara";
    libros[1].precio = 12;

    libros[2].codigo = "003";
    libros[2].titulo = "El Guaraguao";
    libros[2].autor = "Joaquin Gallegos Lara";
    libros[2].precio = 8;

    libros[3].codigo = "004";
    libros[3].titulo = "A la costa";
    libros[3].autor = "Luis A. Martínez";
    libros[3].precio = 11;

    libros[4].codigo = "005";
    libros[4].titulo = "Cien años de soledad";
    libros[4].autor = "Gabriel Garcia Marquez";
    libros[4].precio = 15;

    libros[5].codigo = "006";
    libros[5].titulo = "1984";
    libros[5].autor = "George Orwell";
    libros[5].precio = 13;

    libros[6].codigo = "007";
    libros[6].titulo = "El Quijote";
    libros[6].autor = "Miguel de Cervantes";
    libros[6].precio = 20;
}


/* 3)Esta función toma un arreglo de estructuras `Libro` 
y el número total de libros en el arreglo, e imprime 
los detalles de cada libro (título, autor, código y precio).*/

void ImprimirLibros(Libro libros[], int total){
    for(int k=0; k<total; k++){
        cout<<endl<<"Titulo: "<<libros[k].titulo;
        cout<<endl<<"Autor: "<<libros[k].titulo;
        cout<<endl<<"Codigo: "<<libros[k].titulo;
        cout<<endl<<"Precio: "<<libros[k].titulo;

    }
}

// 4)Función para intercambiar dos libros
void intercambio(Libro& a, Libro& b) {
    Libro aux = a;
    a = b;
    b = aux;
}


// 5)Ordena los libros por título (orden ascendente)
void OrdenarxTitulo(Libro libros[], int total) {
    //bucle para iterar dentro del array
    for (int i = 0; i < total - 1; ++i) {
        int ac = i;//variable para el seguimiento del indice del libro
        //bucle para buscar el indice del libro con el titulo
        for (int j = i + 1; j < total; ++j) {
            //se comparan los libros para ordenarlos
            if (libros[j].titulo < libros[ac].titulo) {
                ac = j;
            }
        }
        //llama a la funcion intercambio para que valla haciendo el intercambio
        intercambio(libros[i], libros[ac]);
    }
}

// 6)Ordena los libros por precio (orden ascendente)
void OrdenarxPrecio(Libro libros[], int total) {
    for (int i = 0; i < total - 1; ++i) {
        int ac = i;
        for (int j = i + 1; j < total; ++j) {
            if (libros[j].precio < libros[ac].precio) {
                ac = j;
            }
        }
        intercambio(libros[i], libros[ac]);
    }
}



// 7)Función para leer libros desde el teclado
void LeerLibro(Libro& libro) {
    cout << "Ingrese el código del libro: ";
    cin >> libro.codigo;
    cout << "Ingrese el título del libro: ";
    cin >> libro.titulo;  // Leer directamente sin getline
    cout << "Ingrese el autor del libro: ";
    cin >> libro.autor;   // Leer directamente sin getline
    cout << "Ingrese el precio del libro: ";
    cin >> libro.precio;
}
int main(){
    
    const int max = 7;
    Libro libros[max];
    AsignarLibros(libros, max);
    ImprimirLibros(libros, max);
    cout<<endl<<endl<<"Tipo estructurado";

    return 0;
}