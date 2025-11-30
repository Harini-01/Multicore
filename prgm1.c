#include <stdio.h>
#include <pthread.h>
#define SIZE 3
int A[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
int B[SIZE][SIZE] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
int C[SIZE][SIZE];
void *add_matrices(void* arg){
    int i = *(int*)arg;
    for(int j = 0; j < SIZE; j++)
        C[i][j] = A[i][j] + B[i][j];
    return NULL;}
int main(){
    pthread_t threads[SIZE];
    int indices[SIZE];  
    for(int i = 0; i < SIZE; i++) {
        indices[i] = i;
        pthread_create(&threads[i], NULL, add_matrices, (void*)&indices[i]);    }
    for(int i = 0; i < SIZE; i++)
        pthread_join(threads[i], NULL);
    printf("Resultant matrix:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++)
            printf("%d ", C[i][j]);
        printf("\n");    }
    return 0;}

