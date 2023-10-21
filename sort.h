#ifndef SORT_HEADER
#define SORT_HEADER
/*include neccessary libraries*/
#include <stddef.h>


/* Data structures*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/*sorting algorithms*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
<<<<<<< HEAD
=======


>>>>>>> df584ea7d9a70e143f5a5b0ae10c20b12c26d298

/* print functions*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
#endif
