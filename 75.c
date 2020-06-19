#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct lnode {
	int data;
	struct lnode *next;
} *head, *visit;

// добавляем новый узел в связный список
void llist_add (struct lnode **q, int num);

// осуществляем сортировку связного списка
void llist_bubble_sort (void);

// выводим результат
void llist_print (void);

int main(void) {
	// связный список
	struct lnode *newnode = NULL;
	int i = 0; // общий счетчик

	// загружаем случайные числа в связный список
	for (i = 0; i < MAX; i++) {
		llist_add (&newnode, (rand() % 100));
	}

	head = newnode;

	printf ("До сортировки:\n");
	llist_print();

	printf ("После сортировки:\n");
	llist_bubble_sort();
	llist_print();

	return 0;
}

// добавляем узел в конец связного списка
void llist_add (struct lnode **q, int num) {
	struct lnode *tmp;

	tmp = *q;

	// если список пуст, создаем первый узел
	if (*q == NULL) {
		*q = malloc (sizeof(struct lnode));
		tmp = *q;
	} else {
		//переходим к последнему узлу
		while (tmp->next != NULL)
			tmp = tmp->next;
		
		// добавляем узел в конец списка
		tmp->next = malloc(sizeof(struct lnode));
		tmp = tmp->next;
	}

	// присваиваем данные последнему узлу
	tmp->data = num;
	tmp->next = NULL;
}

// выводим связный список
void llist_print(void) {
	visit = head;

	while (visit != NULL) {
		printf ("%d ", visit->data);
		visit = visit->next;
	}
	printf ("\n");
}

// пузырьковая сортировка связного списка
void llist_bubble_sort(void) {
	struct lnode *a = NULL;
	struct lnode *b = NULL;
	struct lnode *c = NULL;
	struct lnode *e = NULL;
	struct lnode *tmp = NULL;

	// Алгоритм пузырьковой сортировки, адаптированный под связный список
	while (e != head->next) {
		c = a = head;
		b = a->next;
		while (a != e) {
			if (a->data > b->data) {
				if (a == head) {
					tmp = b->next;
					b->next = a;
					a->next = tmp;
					head = b;
					c = b;
				} else {
					tmp = b->next;
					b->next = a;
					a->next = tmp;
					c->next = b;
					c = b;
				}
			} else {
				c = a;
				a = a->next;
			}
			b = a->next;
			if (b == e)
				e = a;
		}
	}
}
