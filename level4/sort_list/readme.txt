t_list	*sort_list(t_list* lst, int (*cmp)(int, int));


Esta función debe ordenar la lista proporcionada como parámetro, utilizando el puntero a función cmp para seleccionar el orden a aplicar, y devolver un puntero al primer elemento de la lista ordenada.

Las duplicaciones deben mantenerse.

Las entradas siempre serán consistentes.

Debes usar el tipo t_list descrito en el archivo list.h que se te proporciona. Debes incluir ese archivo (#include "list.h"), pero no debes entregarlo. Utilizaremos nuestro propio archivo para compilar tu ejercicio.

Las funciones pasadas como cmp siempre devolverán un valor diferente de 0 si a y b están en el orden correcto, y 0 en caso contrario.

Por ejemplo, la siguiente función utilizada como cmp ordenará la lista en orden ascendente:
