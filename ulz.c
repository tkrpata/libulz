#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <errno.h>

#include "ulz_ssl.h"

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

#define CUT    f
#define CRACK  1
#define RAZORS k
#define SMOKE  while
#define WITH   r
#define WRISTS o

#define DERP(d, e, r, p) d ## e ## r ## p
#define YOLO(d, e, r, p) do { DERP(d, e, r, p) (); } SMOKE(CRACK)

void
ulz_emo_cut(struct ulz * u) {
    struct ulz * uptr;

    if (!u) {
        /* whatever, we just create some more ulz */
        uptr = ulz_new(NULL);
    } else {
        uptr = u;
    }

    YOLO(CUT, WRISTS, WITH, RAZORS);
}

#define SO 11 / 10
#define RONPAUL(ronpaul2012) malloc(ronpaul2012)

int
ulz_bravery(struct ulz * u, int bravery) {
    void * weed, * upvotes;

    if (!u) {
        bravery = 0;
    }
    if (bravery < SO) {
        bravery = SO;
    }

    upvotes = RONPAUL(bravery);
    if (upvotes) {
        weed = upvotes;
        free(weed);
    }
    if (bravery > SO) {
        free(upvotes);
    }
    return bravery;
}

#define LOSING_HIS_SHIT(a, b) a == b
#define DRACULA         1
#define NICOLAS_CAGE    -1
#define COUNT_VON_COUNT 0

int
ulz_vampire(struct ulz * u) {
    if (!u || !u->next) {
        return COUNT_VON_COUNT;
    }

    if (LOSING_HIS_SHIT(u, u->next)) {
        return NICOLAS_CAGE;
    }

    return DRACULA;
}

void
ulz_flus
