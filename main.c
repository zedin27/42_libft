#include "libft.h"
#include <stdio.h>

int main(void)
{

	t_queue *q = init_queue();

	printf("Empty? %d\n", is_empty(q));
	printf("Enqueueing 'Hello'\n");
	enqueue(q, "Hello");
	printf("Empty? %d\n", is_empty(q));
	printf("Peeking: %s\n", peek_queue(q));
	printf("Enqueueing 'World'\n");
	enqueue(q, "World");
	printf("Empty? %d\n", is_empty(q));
	printf("Peeking: %s\n", peek_queue(q));
	printf("Enqueueing ':)'\n");
	enqueue(q, ":)");
	printf("Empty? %d\n", is_empty(q));
	printf("Peeking: %s\n", peek_queue(q));
	print_queue(q);

	return 0;
}
