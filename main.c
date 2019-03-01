#include "libft.h"
#include <stdio.h>

int main(void)
{

	t_queue *q = init_queue();

	printf("Empty? %d\n", is_empty(q));
	// printf("Enqueueing 'Hello'\n");
	enqueue(q, "3");
	// printf("Empty? %d\n", is_empty(q));
	// printf("Peeking: %s\n", peek_queue(q));
	// printf("Enqueueing 'World'\n");
	enqueue(q, "2");
	// printf("Empty? %d\n", is_empty(q));
	// printf("Peeking: %s\n", peek_queue(q));
	// printf("Enqueueing ':)'\n");
	enqueue(q, "1");
	enqueue(q, "a");
	enqueue(q, "b");
	enqueue(q, "c");
	enqueue(q, "d");
	enqueue(q, "e");
	enqueue(q, "f");
	printf("Empty? %d\n", is_empty(q));
	printf("Peeking: %s\n", peek_queue(q));

	ft_print_queue(q);

	return 0;
}
