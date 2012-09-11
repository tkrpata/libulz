#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>

struct ulz {
    void       * args;
    struct ulz * next;
};

struct ulz *
ulz_new(void * args) {
    struct ulz * n;

    if (!(n = malloc(sizeof(struct ulz)))) {
	return NULL;
    }

    n->args = args;

    return n;
}

void
ulz_free(struct ulz * u) {
    free(u);
}

void
has_anyone_really_been_far_even_as_decided_to_use_even_go_want_to_do_look_more_like(struct ulz * u) {
    if(ulz != NULL) {
        ulz->args = (void*)ulz;
    }
}

