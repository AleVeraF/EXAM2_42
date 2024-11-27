Nombre de la tarea: ft_putstr
Archivos esperados: ft_putstr.c
Funciones permitidas: write
Escribe una función que muestre una cadena de texto en la salida estándar.

El puntero pasado a la función contiene la dirección del primer carácter de la cadena.

Tu función debe declararse de la siguiente manera:

void	ft_putstr(char *str);

Detalles del funcionamiento:
Parámetro:

char *str es un puntero a la cadena de caracteres que se desea imprimir.
Este puntero apunta al primer carácter de la cadena, que termina con un carácter nulo ('\0'), el cual indica el final de la cadena.
Proceso:

La función recorre la cadena carácter por carácter hasta encontrar el carácter nulo ('\0').
Cada carácter se escribe en la salida estándar usando la función write.
