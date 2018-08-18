# recusive fibonacci
def F(n):
    if n == 0: return 0
    elif n == 1: return 1
    else: return F(n-1) + F(n-2)
F(8)
# "top down" memoized recursive fibonacci
memo = {}
def Fib(n):
    if n in memo: return memo[n]
    if n == 0: f = 0
    elif n == 1: f = 1
    else: f = Fib(n-1) + Fib(n-2)
    memo[n] = f
    return f
Fib(8)
# "bottom up" iterative fibonacci
def fib(n):
    fn = [0,1]
    for i in range(n >> 1):
        fn[0] += fn[1]
        fn[1] += fn[0]
    return fn[n % 2]
fib(8)