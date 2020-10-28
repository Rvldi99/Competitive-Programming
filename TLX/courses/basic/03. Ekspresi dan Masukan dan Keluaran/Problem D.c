#include <stdio.h>

int main()
{
    int N, M, Hasil, Sisa;

    scanf("%d", &N);
    scanf("%d", &M);

    Hasil = N / M;
    Sisa = N % M;

    printf("masing-masing %d\n", Hasil);
    printf("bersisa %d\n", Sisa);
}
