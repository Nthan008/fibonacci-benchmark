#include <stdio.h>

// ITERATIVE FIBONACCI
int iterativeFibonacci(int N){

    int num_1 = 0;
    int num_2 = 1;
    int fib;

    if (N == 0){
        return num_1;
    } else if (N == 1){
        return num_2;
    } else{
        for(int i = 2; i <= N; i++){
            fib = num_1 + num_2;
            num_1 = num_2;
            num_2 = fib;
        }
        return fib;
    }
    
    
}

// RECURSIVE FIBONACCI
int recursiveFibonacci(int num){

    if (num == 0){
        return 0;
    } else if (num == 1){
        return 1;
    } else{
        return recursiveFibonacci(num-1)+recursiveFibonacci(num-2);
    }
    
}
