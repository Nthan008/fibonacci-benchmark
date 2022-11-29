# Fibonacci Series
In mathematics, the Fibonacci numbers, commonly denoted Fₙ, form a sequence or series, the Fibonacci series, in which each number is the sum of the two preceding ones. The sequence commonly starts from 0 and 1.

To calculate the fibonacci series, It can be done in two ways, either iteratively or recursively.

## Fibonacci Series using Iterative Method

```c
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
```

## Fibonacci Series using Recursive Method

``` c
int recursiveFibonacci(int num){

    if (num == 0){
        return 0;
    } else if (num == 1){
        return 1;
    } else{
        return recursiveFibonacci(num-1)+recursiveFibonacci(num-2);
    }
    
}
```

### Run:
```
make; ./main.out
```

### Output:
```
The fibonacci number for 10 is 55
The fibonacci number for 10 is 55
The fibonacci number F(0) = 0 = 0
The fibonacci number F(1) = 1 = 1
The fibonacci number F(2) = 1 = 1
The fibonacci number F(3) = 2 = 2
The fibonacci number F(4) = 3 = 3
The fibonacci number F(5) = 5 = 5
The fibonacci number F(6) = 8 = 8
The fibonacci number F(7) = 13 = 13
The fibonacci number F(8) = 21 = 21
The fibonacci number F(9) = 34 = 34
The fibonacci number F(10) = 55 = 55
```

## Benchmark
In the section below, we can see the difference in performance from both the iterative and recursive method.

### Time Complexity
### Iterative
- Run:
```
make time-iterative; ./main_b_time_iterative.out
```

- Output:
```
Time elapsed: 0.000003 s
```


### Recursive Approach
- Run:
```
make time-recursive; ./main_b_time_recursive.out
```

- Output:
```
Time elapsed: 1.121600 s
```

From the results, we can see that the iterative method is faster than the recursive method.

### Space Complexity
I am using 500 as the fibonacci number that i am seeking for to see the space that are taken to run the code.
### Iterative
- Run:
```
make space-iterative; ./main_b_space_iterative.out
```

- Output:
![Space N = 800](images/space_complexity_iterative.png)

### Recursive
- Run:
```
make space-recursive; ./main_b_space_recursive.out
```
- Output:
![Space N = 800](images/space_complexity_recursive.png)

## Conclusion
As seen from the outputs above, using the iterative method is much more faster and takes up less space. The reason for this is that the recursive method calculate the same values and overlap it repeatedly until you get the desired fibonacci result by adding and storing the redundant calls. This takes more space and time because it only use the last two values and store that two values to calculate the result.

