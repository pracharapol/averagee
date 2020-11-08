#include <stdio.h>

float compute_avg(float n, int* array);
int main(void) {
    int num;
    int a[10000];
    int* point = a;
    float avg;
    scanf_s("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf_s("%d", &a[i]);
    }
    avg = compute_avg(num, point);
    printf("%.2f", avg);
    return 0;
}
float compute_avg(float n, int* array) {
    float sum = 0, avg;
    int a[1000];
    for (int i = 0; i < n; i++) {
        sum += *(array + i);
        avg = sum / n;
    }
    return avg;
}