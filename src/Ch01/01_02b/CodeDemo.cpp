// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

/* Neste programa Navi
saúdanos co seu
característico "Hey, listen!" 
e probamos algunhas funcións
básicas de entrada e saída en C++.*/

// Incluímos a libraría iostream, que nos permite usar cout e endl
#include <iostream>

// Navi intenta chamar a túa atención por primeira vez
int hey_listen(){
    // Mostramos o texto "Hey, listen!" na pantalla, seguido dun salto de liña
    std::cout << "Hey, listen!" << std::endl;
    // Engadimos dúas liñas baleiras máis
    std::cout << std::endl << std::endl;
    // Indicamos que a función rematou correctamente
    return 0;
}

// Non lle fas caso a Navi? Haberá que probar doutro xeito...
// A libraría cstdio permítenos usar a función printf (C clásico)
#include <cstdio> 

// Navi segue a intentar que lle fagas caso
int watch_out(){
    // Navi está berrando!
    printf("Watch out!\n");
    // Indicamos que a función rematou correctamente
    return 0;
}

/* Non poden existir dúas funcións main
nun mesmo código. 
Todas as funcións auxiliares deben
definirse previamente e chamarse desde main.*/

// Talvez o heroe non se estea dando por aludido?
// Preguntémoslle o nome nada máis empezar.
// string permite declarar variables de texto
#include <string>

// Definimos agora a función principal
int main(){
    // Declaramos a variable do nome
    std::string nome;
    // Preguntamos o nome dé heroíñe
    std::cout << "Es ti? O Heroe do Tempo que salvará Hyrule? Cal é o teu nome? " << std::flush;
    // E almaceamos a resposta na variable nome
    std::cin >> nome;
    // Espazo estético
    std::cout << std::endl << std::endl;
    // Navi intenta chamarte
    hey_listen();
    // Volve intentalo
    watch_out();
    // Espazo estético
    std::cout << std::endl << std::endl;
    // Navi chámate polo teu nome para chamar a túa atención
    std::cout << "Hey! " << nome << "!";
    // Espazo estético
    std::cout << std::endl << std::endl;
    // Fin do programa correcto
    return 0;
}