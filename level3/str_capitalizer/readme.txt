Nombre de la asignación: str_capitalizer
Archivos esperados: str_capitalizer.c
Funciones permitidas: write
Escribe un programa que tome una o varias cadenas y, para cada argumento:

Capitalice la primera letra de cada palabra (si es una letra, obviamente).
Convierta el resto de los caracteres a minúsculas.
Muestre el resultado en la salida estándar, seguido de un salto de línea (\n).
Una "palabra" se define como una parte de la cadena delimitada por espacios, tabulaciones o por el inicio/fin de la cadena. Si una palabra solo tiene una letra, esta debe estar en mayúscula.

Si no se proporcionan argumentos, el programa debe mostrar únicamente un salto de línea (\n).

Ejemplo:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
