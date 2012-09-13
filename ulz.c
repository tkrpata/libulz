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
ulz_has_anyone_really_been_far_even_as_decided_to_use_even_go_want_to_do_look_more_like(struct ulz * u) {
    if (u != NULL) {
        u->args = (void*)u;
    }
}

int
ulz_yo_dawg_i_hurd_u_like_ulz_so_i_put_a_ulz_in_ur_ulz(struct ulz * in_ur) {
    struct ulz * ulz;

    if (!in_ur) {
        return -0x90;
    }

    if ((ulz = ulz_new(in_ur)) == NULL) {
        return -666;
    }

    ulz->next   = in_ur;
    in_ur->next = ulz;

    return 0;
}

