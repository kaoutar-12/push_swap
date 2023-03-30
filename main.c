#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: ./program <string_of_integers>\n");
        return 1;
    }

    char* str = argv[1];
    int* arr = malloc(sizeof(int));
    int capacity = 1;
    int size = 0;

    char* token = strtok(str, " ");

    while (token != NULL) {
        if (size == capacity) {
            capacity *= 2;
            int* temp = malloc(capacity * sizeof(int));
            memcpy(temp, arr, size * sizeof(int));
            free(arr);
            arr = temp;
        }
        arr[size++] = atoi(token);
        token = strtok(NULL, " ");
    }

    // Print out the resulting array of integers
    printf("Array of integers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // free dynamically allocated memory

    return 0;
}
