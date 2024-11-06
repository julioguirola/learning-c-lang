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
    struct lnode *new_node = malloc(sizeof(struct lnode));
    new_node->value = value;
    new_node->next = NULL;

    if (lst->head == NULL) {
        lst->head = new_node;
        lst->tail = new_node;
    } else {
        lst->tail->next = new_node;
        lst->tail = new_node;
    }
}

struct lnode * list_find(struct list *lst, int value) {
    for (struct lnode *aux = lst->head; aux != NULL; aux = aux->next) {
        if (aux->value == value) return aux;
    }
    return NULL;
}

int main()
{

    struct list mylist;
    struct lnode * mynode;

    mylist.head = NULL;
    mylist.tail = NULL;

    list_add(&mylist, 10);
    list_add(&mylist, 20);
    list_add(&mylist, 30);
    list_dump(&mylist);

    mynode = list_find(&mylist, 42);
    if ( mynode == NULL ) {
        printf("Did not find 42\n");
    } else {
        printf("Looked for 42, found %d\n", mynode->value);
    }

    mynode = list_find(&mylist, 30);
    if ( mynode == NULL || mynode->value != 30) {
        printf("Did not find 30\n");
    } else {
        printf("Found 30\n");
    }

    list_add(&mylist, 40);
    list_dump(&mylist);

}
