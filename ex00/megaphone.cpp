#include <iostream>
#include <string>

/*
Lógica del Programa
Verificar si hay argumentos: Si el número de argumentos es cero (aparte del nombre del programa), imprimir "* LOUD AND UNBEARABLE FEEDBACK NOISE *".
Concatenar los argumentos: Si hay argumentos, concatenarlos en una sola cadena separada por espacios.
Convertir la cadena a mayúsculas: Recorrer la cadena y convertir cada carácter a mayúsculas.
Imprimir el resultado: Imprimir la cadena resultante.
*/

int main(int argc, char **argv)
{
    // Si no hay argumentos imprimir el mensaje por defecto
    if (argc == 1)
    {
        std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
            {
                std::cout << (char)toupper(argv[i][j]);
            }
            if (i < argc - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}