#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Digite uma string: ");
    scanf("%s", str);

    len = strlen(str);
    printf("String invertida: ");

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
