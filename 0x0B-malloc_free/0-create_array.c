#include <main.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }
    
    char *arr = malloc(size * sizeof(char));
    if (arr == NULL) {
        return NULL;
    }
    
    for (unsigned int i = 0; i < size; i++) {
        arr[i] = c;
    }
    
    return arr;
}
