#include <stdio.h>
#include <string.h>

int main() {
    char   c[4];
    int    i[4];
    float  f[4];
    double d[4];

    printf("Em char:\n");
    for(int i = 0; i < 4; i++) {
        printf("  %p\n", c + i);
    }
    printf("\n");

    printf("Em int:\n");
    for(int i = 0; i < 4; i++) {
        printf("  %p\n", i + i);
    }
    printf("\n");

    printf("Em float:\n");
    for(int i = 0; i < 4; i++) {
        printf("  %p\n", f + i);
    }
    printf("\n");

    printf("Em double:\n");
    for(int i = 0; i < 4; i++) {
        printf("  %p\n", d + i);
    }
    printf("\n");

}
