#include "Zombie.hpp"

// Macros para los colores
#define RESET   "\033[0m"
#define HEAP_COLOR "\033[34m" // Azul para heap
#define STACK_COLOR "\033[32m" // Verde para stack
#define DELETE_COLOR "\033[31m" // Rojo para delete

int main(void)
{
    Zombie *zombie = newZombie("Rick"); // Asigna en el heap
    Zombie *zombie2 = newZombie("Boo");
    Zombie *Foo = newZombie("Foo");
    
    // Imprimir anuncios de heap en azul
    std::cout << HEAP_COLOR;
    zombie->announce();
    zombie2->announce();
    Foo->announce();
    std::cout << RESET; // Resetear color
    std::cout << std::endl;

    // Imprimir anuncios de stack en verde
    std::cout << STACK_COLOR;
    randomChump("TORI");
    randomChump("LOLI");
    std::cout << RESET; // Resetear color
    std::cout << std::endl;

    // Liberar memoria en el heap
    std::cout << DELETE_COLOR;
    delete Foo;
    delete zombie;
    delete zombie2;
    std::cout << RESET;
    
    return 0;
}

/*

Stack: Ideal para variables locales que
        o necesitan persistir después de la función.
        La memoria se gestiona automáticamente, y
        el uso es muy eficiente.
Heap: Ideal para objetos que necesitan durar más
        allá del ámbito de una función o que tienen
        un tamaño variable. La memoria debe ser
        gestionada manualmente.
    
    ¿Cuándo es mejor asignar el Zombie en el heap o en la pila?

Asignar en la pila es adecuado si el Zombie solo necesita 
existir dentro del ámbito de una función específica y no 
necesitas acceder a él fuera de esa función. Es más sencillo 
y automático en términos de gestión de memoria.

Asignar en el heap es mejor si necesitas que el Zombie exista 
más allá del alcance de una función o si necesitas pasar el 
Zombie a diferentes partes del programa. Aunque requiere 
gestión manual de la memoria (con new y delete), proporciona 
flexibilidad adicional en cuanto a la duración y el alcance 
del objeto.

*/