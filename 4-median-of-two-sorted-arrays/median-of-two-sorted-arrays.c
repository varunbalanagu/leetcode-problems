#include <stdio.h>
#include <stdlib.h>

void print_array(int *A, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// Sub-routine -> merging process
void merge(int *A, int l, int m, int h) {
    int i = l, j = m + 1, k = 0;
    int *res = (int *)malloc((h - l + 1) * sizeof(int)); // Dynamically allocate memory
    while (i <= m && j <= h) {
        if (A[i] <= A[j]) {
            res[k] = A[i];
            i++, k++;
        } else {
            res[k] = A[j];
            j++, k++;
        }
    }
    while (i <= m) {
        res[k] = A[i];
        i++, k++;
    }
    while (j <= h) {
        res[k] = A[j];
        j++, k++;
    }
    k = 0;
    for (i = l; i <= h; i++) {
        A[i] = res[k];
        k++;
    }
    free(res); // Free dynamically allocated memory
}

void merge_sort(int *A, int l, int h) {
    if (l < h) {
        int m = (l + h) / 2;
        merge_sort(A, l, m);
        merge_sort(A, m + 1, h);
        merge(A, l, m, h);
    }
}

double findMedianSortedArrays(int *nums1, int n1, int *nums2, int n2) {
    int m = n1 + n2;
    int res[m]; // Variable-sized array
    int i;
    for (i = 0; i < n1; i++) {
        res[i] = nums1[i];
    }
    for (int j = 0; j < n2; j++) {
        res[i] = nums2[j];
        i++;
    }

    merge_sort(res, 0, m - 1);
    if (m % 2 != 0) {
        double a = res[m / 2];
        return a;
    } else {
        double a = res[m / 2];
        double b = res[(m / 2) - 1];
        return (a + b) / 2;
    }
}