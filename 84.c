#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct lnode {
	int data;
	struct lnode *next;
} *head, *visit;

// добавляем новый узел в связный список
void llist_add(struct lnode **q, int num);

// выборочная сортировка списка
void llist_selection_sort(void);

// выводим связный список
void llist_print(void);

int main(void) {
	// связный список
	struct lnode *newnode = NULL;
	int i = 0; /* общий счетчик */

	// добавляем в список случайные данные
	for (i = 0; i < MAX; i++) {
		llist_add(&newnode, (rand() % 100));
	}

	head = newnode;
	printf("До\n");
	llist_print();
	printf("После:\n");
	llist_selection_sort();
	llist_print();

	return 0;
}

// Добавляем узел в список связного списка
void llist_add(struct lnode **q, int num) {
	struct lnode *temp;

	temp = *q;

	// если список пуст, создаем первый элемент
	if (*q == NULL) {
		*q = malloc(sizeof(struct lnode));
		temp = *q;
	} else {
		// переходим к последнему узлу
		while (temp->next != NULL)
			temp = temp->next;
		// добавляем узел в конец списка
		temp->next = malloc(sizeof(struct lnode));
		temp = temp->next;
	}

	// назначаем данные последнему узлу
	temp->data = num;
	temp->next = NULL;
}

// выводим связный список
void llist_print(void) {
	visit = head;

	// проходимся по списку и выводим его
	while (visit != NULL) {
		printf ("%d ", visit->data);
		visit = visit->next;
	}
	printf("\n");
}

// функция сортировки выбором
void llist_selection_sort(void) {
	struct lnode *a = NULL;
	struct lnode *b = NULL;
	struct lnode *c = NULL;
	struct lnode *d = NULL;
	struct lnode *tmp = NULL;

	a = c = head;
	while (a->next != NULL) {
		a = b = a->next;
		while (b != NULL) {
			if (a->data > b->data) {
				// соседний связный узел списка
				if (a->next == b) {
					// если а = голова
					if (a == head) {
						a->next = b->next;
						b->next = a;
						tmp = a;
						a = b;
						b = tmp;
						head = a;
						c = a;
						d = b;
						b = b->next;
					} else {
						a->next = b->next;
						b->next = a;
						c->next = b;
						tmp = a;
						a = b;
						b = tmp;
						d = b;
						b = b->next;
					}
				} else {
					if (a == head) {
						tmp = b->next;
						b->next = a->next;
						a->next = tmp;
						d->next = a;
						tmp = a;
						a = b;
						b = tmp;
						d = b;
						b = b->next;
						head = a;
					} else {
						tmp = b->next;
						b->next = a->next;
						a->next = tmp;
						c->next = b;
						d->next = a;
						tmp = a;
						a = b;
						b = tmp;
						d = b;
						b = b->next;
					}
				}
			} else {
				d = b;
				b = b->next;
			}
		}
		c = a;
		a = a->next;
	}
}
