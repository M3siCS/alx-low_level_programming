#include <stdio.h>

int add(int m, int h) {
    return m + h;
}

int sub(int m, int h) {
    return m - h;
}

int mul(int m, int h) {
    return m * h;
}

int div(int m, int h) {
    if (h == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return m / h;
}

int mod(int m, int h) {
    if (h == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return m % h;
}

