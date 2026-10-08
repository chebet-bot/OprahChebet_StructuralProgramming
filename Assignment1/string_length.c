// Task 3: String Length
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a string: ");
    scanf("%99s", name); // use fgets() instead if you need spaces

    printf("You entered: %s\n", name);
    printf("Length: %zu\n", strlen(name));
    return 0;
}
