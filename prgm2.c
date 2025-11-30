#include <stdio.h>
#include <pthread.h>
#define NUM_THREADS 4
long long results[NUM_THREADS];
void* factorial(void* arg) {
    int thread_id = *(int*)arg;
    long long fact = 1;

    for (int i = 1; i <= 5 + thread_id; i++) {
        fact *= i;
    }

    results[thread_id] = fact;
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    int thread_ids[NUM_THREADS];

    for (int i = 0; i < NUM_THREADS; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, factorial, (void*)&thread_ids[i]);
    }

    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
        printf("Factorial computed by thread %d: %lld\n", i, results[i]);
    }

    return 0;
}

