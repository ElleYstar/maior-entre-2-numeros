#include <stdio.h>
int maiorAB(int a, int b) {

    if (a > b) {
        return a;
    } else { 
        return b; 
    }
}

int main() {
    int a, b;

    for (int i = 0; i < 5; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", maiorAB(a,b));
    }
    return 0;
}

