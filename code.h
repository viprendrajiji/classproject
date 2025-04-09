#ifndef code
#define code


int sum(int a, int b) {
    return a + b;
}


int factorial(int num) {
    if (num < 0) return -1;  
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}


int is_even(int num) {
    return num % 2 == 0;
}

#endif 
