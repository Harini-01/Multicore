#include <stdio.h>
#include <omp.h>
#include <stdlib.h>

#define SIZE 1000000

int array[SIZE];

int main() {

    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 100;
    }

    #pragma omp parallel
    {
        if (omp_get_thread_num() == 0) {
            printf("Running with %d threads\n", omp_get_num_threads());
        }
    }

    int sum = 0;

    #pragma omp parallel for reduction(+:sum)
    for (int i = 0; i < SIZE; i++) {
        sum += array[i];
    }

    printf("Total Sum: %d\n", sum);

    return 0;
}
