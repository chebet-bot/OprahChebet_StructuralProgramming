// Task 3: String Length
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a string: ");
    scanf("%99s", name); 

    printf("You entered: %s\n", name);
    printf("Length: %zu\n", strlen(name));
    return 0;
}
