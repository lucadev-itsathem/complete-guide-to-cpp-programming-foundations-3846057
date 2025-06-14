// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

/* Unhe heroíne comeza a súa aventura.
Cunha póla atopada no chan, pode atacar aos
inimigos, pero non ten nada para defenderse. */

int defensa, ataque = 5;

// Aquí comeza a aventura
int main(){
    // Sente un poder latente no seu interior
    bool modoBerserker;
    std::cout << "E nose heroíne comeza a súa aventura armade unicamente cun póla atopada no chan. Non sabe onde está, cal é o seu destino, nin que lle deparará esta viaxe. Só sabe que ten unha misión." << std::endl << std::endl;
    // E heroíne atopa un campamento inimigo, e preto del un pequeno escudo tirado
    defensa = 7;
    // Permanece escondide entre as sombras, tranquile
    modoBerserker = false;
    std::cout << "Tras camiñar durante horas polo bosque, detecta un campamento inimigo e, preto del, un pequeno escudo tirado do que poderá dar bo uso. Permanece agochade entre as sombras, tranquile, pero a segundo a tensión aumenta sinte un poder latente no seu interior." << std::endl << std::endl;

    std::cout << "ATAQUE = " << ataque << std::endl;
    std::cout << "DEFENSA = " << defensa << std::endl;
    std::cout << "Modo Berserker activado? " << modoBerserker << std::endl << std::endl;

    // Nese momento, ve como os inimigos atacan a unha fada
    modoBerserker = true;

    std::cout << "Pensa en alonxarse cando ve unha pequena fada aproveitando a cantimplora do viaxeiro para saciar a súa sede. Cando intenta advertila para que teña coidado, xa é tarde: o inimigo localizouna e atácaa antes de que elu poida facer nada. Sinte unha furia incontible escapar polos seus poros." << std::endl << std::endl;

    std::cout << "Modo Berserker activado? " << modoBerserker << std::endl;

    // O modo berserker permite sumar o poder de defensa ao de ataque
    std::cout << "ATAQUE + = " << ataque + defensa << std::endl << std::endl;

    std::cout << "Corre sen dubidalo cara ao inimigo quen, ao non esperar este ataque, non pode máis que armarse tan pobremente coma e súe adversarie. Porén, é rápido, e pronto consigue asestarlle un golpe." << std::endl << std::endl;

    std::cout << "DANO RECIBIDO = " << defensa - ataque << std::endl << std::endl;

    std::cout << "A fada, malferida, decide axudar ae súe salvadorie outorgándolle temporalmente o máximo poder de saúde do que é capaz, que e fai invulnerable aos ataques xusto antes de que reciba a segunda estocada." << std::endl << std::endl;
    // Cando o dano é negativo, facemos un truco para evitalo:
    unsigned int vidaMaxica;
    vidaMaxica = defensa - ataque - ataque;
    std::cout << "PUNTOS DE VIDA + = " << vidaMaxica << std::endl;

    /* Ao definir un unsigned como un num
    negativo (-x), este mostrará o valor
    2^32-x, que é o valor de -x en binario */

    std::cout << std::endl << std::endl;
    return 0;
}
