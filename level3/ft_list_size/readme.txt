Nombre de la asignación: ft_list_size
Archivos esperados: ft_list_size.c, ft_list.h
Funciones permitidas:
Escribe una función que devuelva el número de elementos en la lista enlazada que se le pasa como argumento.

Debe ser declarada de la siguiente forma:
int	ft_list_size(t_list *begin_list);

Debes usar la siguiente estructura y entregarla en un archivo llamado ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}    
