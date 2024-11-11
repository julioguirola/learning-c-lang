// You will extend the previous assignment with list_add() and list_find()
// and add a function called list_delete() that will find and remove the
// node containing the integer value if it is in the list.

#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int value;
    struct lnode *next;
};

struct list {
  struct lnode *head;
  struct lnode *tail;
};

void list_dump(struct list *lst) {
    struct lnode *cur;
    printf("\nDump:\n");
    for(cur=lst->head; cur != NULL; cur=cur->next) {
        printf("  %d\n", cur->value);
    }
}

void list_add(struct list *lst, int value) {
    /* Append the value to the end of the linked list. */
    struct lnode *new = malloc(sizeof(struct lnode));
    new->value = value;
    new->next = NULL;

    if (lst->head == NULL) {
        lst->head = new;
        lst->tail = new;
    } else {
        lst->tail->next = new;
        lst->tail = new;
    }
}

void list_remove(struct list *lst, int value) {
    /* Remove the value from the linked list. */
    if (lst->head->value == value) {
        lst->head = lst->head->next;
        return;
    }

    struct lnode *aux;
    struct lnode *prev = lst->head;

    for (aux = lst->head; aux != NULL; aux = aux->next) {
        if (aux->value == value) {
            if (aux->next == NULL) {
                prev->next = NULL;
                lst->tail = prev;
                return;
            } else {
                prev->next = prev->next->next;
                return;
            }
        }
        prev = aux;
    }
}

int main() {
    struct list mylist;
    struct lnode * mynode;

    mylist.head = NULL;
    mylist.tail = NULL;

    list_add(&mylist, 10);
    list_add(&mylist, 20);
    list_add(&mylist, 30);
    list_dump(&mylist);

    list_remove(&mylist, 42);

    list_remove(&mylist, 10);
    list_dump(&mylist);

    list_remove(&mylist, 30);
    list_dump(&mylist);

    list_add(&mylist, 40);
    list_dump(&mylist);
}

// Expected output
// Dump:
//   10
//   20
//   30
// Dump:
//   20
//   30
// Dump:
//   20
// Dump:
//   20
//   40
