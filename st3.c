#include <stdio.h>
#include <stdlib.h>

int isPrime(int n);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./prime number\n");
        return 1;
    }
/*この下で。判定した結果次第で、0なら上、そうでなければ下が実行*/
    int n = atoi(argv[1]);
    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
/*この下で、判定関数定義。*/
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

/*引数があったら、真後ろに入れる。*/