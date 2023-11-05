#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_D 100

typedef struct {
    int coordinates[MAX_D];
    int weight;
} Vector;

int d, N;
Vector vectors[MAX_N];


int isLinearlyIndependent(Vector set[], int setSize) {
    
}


int sumOfWeights(Vector set[], int setSize) {
    int sum = 0;
    for (int i = 0; i < setSize; ++i) {
        sum += set[i].weight;
    }
    return sum;
}


void generateCombinations(Vector set[], int setSize, int index, Vector currentSet[], int currentIndex) {
    if (currentIndex == setSize) {
     
        if (isLinearlyIndependent(currentSet, setSize)) {
            
        }
        return;
    }

    if (index == N) {
        return;
    }


    currentSet[currentIndex] = vectors[index];
    generateCombinations(set, setSize, index + 1, currentSet, currentIndex + 1);

  
    generateCombinations(set, setSize, index + 1, currentSet, currentIndex);
}

int main() {

    scanf("%d %d", &d, &N);

    // Read vectors
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < d; ++j) {
            scanf("%d", &vectors[i].coordinates[j]);
        }
        scanf("%d", &vectors[i].weight);
    }


    Vector currentSet[MAX_N];
    generateCombinations(currentSet, d, 0, currentSet, 0);



    return 0;
}
