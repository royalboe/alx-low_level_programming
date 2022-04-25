0x13. C -More singly linked lists

## Description
-How to use linked lists.

-Start to look for the right source of information without too much help

## Table of contents

Directories | Description
----------- | -----------
[.gitignore](./.gitignore) | Ignores compiled files and test files.
[lists.h](./lists.h) | Header File
[1-listint_len.c](./1-listint_len.c) | Function that returns the number of elements in a linked listint_t list. Prototype: size_t listint_len(const listint_t *h);
[2-add_nodeint.c](./2-add_nodeint.c) | Function that adds a new node at the beginning of a listint_t list. Prototype: listint_t *add_nodeint(listint_t **head, const int n);
[3-add_nodeint_end.c](./3-add_nodeint_end.c) | Function that adds a new node at the end of a listint_t list. Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
[4-free_listint.c](./4-free_listint.c) | Function that frees a listint_t list. Prototype: void free_listint(listint_t *head);
[5-free_listint2.c](./5-free_listint2.c) | Function that frees a listint_t list. Prototype: void free_listint2(listint_t *head);
[6-pop_listint.c](./6-pop_listint.c) | function that deletes the head node of a listint_t linked list, and returns the head node’s data (n). Prototype: int pop_listint(listint_t **head);
[7-get_nodeint.c](./7-get_nodeint.c) | Function that returns the nth node of a listint_t linked list. Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
[8-sum_listint.c](./8-sum_listint.c) | Function that returns the sum of all the data (n) of a listint_t linked list. Prototype: int sum_listint(listint_t *head);
[9-insert_nodeint.c](./9-insert_nodeint.c) | Function that inserts a new node at a given position. Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
[10-delete_nodeint.c](./10-delete_nodeint.c) | Function that deletes the node at index index of a listint_t linked list. Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
[100-reverse_listint.c](./100-reverse_listint.c) | Function that reverses a listint_t linked list. Prototype: listint_t *reverse_listint(listint_t **head);
[101-print_listint_safe.c](./101-print_listint_safe.c) | Function that prints a listint_t linked list. Prototype: size_t print_listint_safe(const listint_t *head);
[102-free_listint_safe.c](./102-free_listint_safe.c) | Function that frees a listint_t list. Prototype: size_t free_listint_safe(listint_t **h);
[103-find_loop.c](./103-find_loop.c) | Function that finds the loop in a linked list. Prototype: listint_t *find_listint_loop(listint_t *head);
