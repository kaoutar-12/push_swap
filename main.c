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



explain this with details 
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



1. while (token != NULL) - This starts a loop that continues until the strtok() function returns NULL, indicating that there are no more tokens to extract from the input string.

 2. if (size == capacity) - This checks whether the current number of elements in the arr array is equal to its current capacity. If this condition is true, it means that we need to allocate more memory for the array to avoid running out of space.

3. capacity *= 2 - This doubles the current capacity of the array, so that it has enough space to store additional elements.

int* temp = malloc(capacity * sizeof(int)) - This allocates a new block of memory that is large enough to store the expanded array. The sizeof(int) expression specifies the size of each individual element in the array.

memcpy(temp, arr, size * sizeof(int)) - This copies the contents of the old array into the new one, using the memcpy() function. The size * sizeof(int) expression specifies the number of bytes to copy, which is equal to the size of the old array.

free(arr) - This frees the old array, since we no longer need it.

arr = temp - This updates the arr pointer to point to the new array, which is now the expanded one.

arr[size++] = atoi(token) - This assigns the integer value of the current token to the next available position in the array, using the atoi() function to convert the token from a string to an integer. The size++ expression increments the size of the array to reflect the addition of the new element.

token = strtok(NULL, " ") - This extracts the next token from the input string, using the strtok() function with a NULL argument to continue from where it left off. The second argument specifies the delimiter character to use for tokenization, in this case a space character.

In summary, this code parses a string of space-separated integers and stores them in a dynamically allocated array, resizing the array as needed to accommodate additional elements. The code uses the strtok() function to tokenize the input string and the atoi() function to convert each token to an integer. When the array reaches its current capacity, the code dynamically allocates a larger block of memory and copies the contents of the old array into it before freeing the old array.



