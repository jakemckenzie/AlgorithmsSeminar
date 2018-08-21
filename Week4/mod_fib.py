def mod_fib(n):
    if n == 0:
        return 0;
    if n == 1:
        return 1;
    if n > 1:
        return mod_fib(n - 2)**2 + mod_fib(n - 1)
for i in range(0,50):
    print(mod_fib(i)/mod_fib(i+1))