Nombre de la asignación: epur_str
Archivos esperados: epur_str.c
Funciones permitidas: write
Escribe un programa que tome una cadena y muestre esta cadena con exactamente un espacio entre palabras, sin espacios ni tabulaciones al principio o al final, seguido de un salto de línea (\n).

Una "palabra" se define como una parte de la cadena delimitada por espacios/tabulaciones o por el inicio/fin de la cadena.

Si el número de argumentos no es 1, o si no hay palabras para mostrar, el programa debe mostrar únicamente un salto de línea (\n).

Ejemplo:


$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
