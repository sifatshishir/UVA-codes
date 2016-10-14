#include <stdio.h>
#define VOW 1001
int prime[VOW];
void sieve()
 {
    int i, j, c;
    for (i=0;i<VOW;i++)
        prime[i]=1;
    for (j=2;j<VOW;j++)
    {
        if (prime[j])
            for (c=j+j;c<VOW;c=c+j)
             prime[c] = 0;
    }
}

int main()
 {
    int i, N, C, A, B, K, S;
    sieve();
    while (scanf("%d %d", &N, &C)==2)
    {
        S=0;
        int primes[VOW];
        for (i=1;i<=N;i++)
            if (prime[i])
                primes[S++]=i;

        K = 2 * C - (S % 2);
        A = K > S ? 0 : (S - K) / 2;
        B = K > S ? S : (A + K);

        printf("%d %d:",N,C);
        for (i=A;i<B;i++)
            printf(" %d",primes[i]);
        printf("\n\n");
    }
    return 0;
}
