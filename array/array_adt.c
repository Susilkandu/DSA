#include <stdio.h>
#include <stdlib.h>

struct myarray {
    int total_size;
    int used_size;
    int *ptr;
};

void crtarray(struct myarray *Ptr, int tsize, int used_size) {
    Ptr->total_size = tsize;
    Ptr->used_size = used_size;
    Ptr->ptr = (int *)malloc(tsize * sizeof(int));
    
    // Check if memory allocation was successful
    if (Ptr->ptr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit if allocation fails
    }
}

void setVal(struct myarray *s) {
    int n;
    for (int i = 0; i < s->used_size; i++) {
        printf("\n Enter Number %d: ", i + 1);
        
        // Check if scanf is successful
        scanf("%d",&n);
        s->ptr[i] = n;
    }
}

void show(struct myarray *s) {
    printf("\nStored values:\n");
    for (int i = 0; i < s->used_size; i++) {
        printf("%d\n", s->ptr[i]);
    }
}

int main() {
    struct myarray marks;
    crtarray(&marks, 9, 3);
    
    setVal(&marks);
    
    show(&marks);
    
    // Free allocated memory
    free(marks.ptr);
    
    return 0;
}
