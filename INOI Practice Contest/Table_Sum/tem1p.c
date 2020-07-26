#include <stdio.h>

int N;
int A[200000];
int M[200000];

int main(){
    int i,m,max,j,mval,mmax;

    scanf("%d",&N);

    for(i = 0;i < N; i++){
        scanf("%d",&A[i]);
        A[i] = A[i]+i+1;
    }

    m = 0;
    max = 0;
    M[0] = 0;

    for(i = 1;i < N; i++){
        if(A[i] > A[max]){
            m++;
            M[m] = i;
            max = i;
        }
    }

    mval = A[max] - N;
    mmax = max;

    for(i = N-1,j = 0;i >=0;i --,j++){
        printf("%d ", A[max]+j);

        A[i] = A[i] - N;

        if(i == max){
            if (A[i] < mval) {
                max = mmax;
            } else if(m > 0 && A[i] < A[M[m-1]]){
                max = M[m-1];
                m--;
            }
        }
    }

    printf("\n");

    return 0;
}