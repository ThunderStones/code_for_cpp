#include <pthread.h>

int n;

void p() {
    n = 1;
}

pthread_create(p);