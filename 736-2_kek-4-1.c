#include<stdio.h>
#include<stdlib.h> 
typedef struct stack {
	int value; 
	struct stack * next; 
} node_t, stack_t;

int is_empty(stack_t ** top) {
	return *top == NULL;
}

void push(stack_t ** top, int value) {
	node_t *node = (node_t *)malloc(sizeof(node_t));
	node->value = value;
	node->next = NULL;
		if(!is_empty(top))
			node->next = *top;
			(*top) = node;
}

void pop(stack_t **top) {
	node_t *node;
		if(!is_empty(top)) {
			node = *top;
			*top = (*top)->next;
			free(node);
			node = NULL;
		}
}

int top(stack_t **top) {
	if(!is_empty(top))
		return (*top)->value;
	else
		return 0;
}

void clear(stack_t **top) {
	while(!is_empty(top))
		pop(top);
}

void print(stack_t **top) {
	node_t *node;
	for(node = *top; node != NULL; node = node->next)
		printf("%d -> ", node->value);
		printf("\b\b\b \n");
}
int main()
{
	int i,n,k;
	stack_t *s1 = NULL; 
	scanf("%d",&n);
	scanf("%d",&k);
		for(i = 0; i < n; ++i){
			push(&s1, i);
		}
	print (&s1);
		for(i = 0; i < k; ++i) {
		pop(&s1);
		}
		;
	print (&s1);
	clear(&s1);
	return 0;
}
