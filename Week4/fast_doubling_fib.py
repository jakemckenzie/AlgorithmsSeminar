mem = dict()
def Fn(n):
    if n <= 2:
        return 1
    if n in mem:
        return mem[n]
    k = n>>1
    a = Fn(k + 1)
    b = Fn(k)
    result = 0
    if n % 2 == 1:
        result = a*a + b*b
    else:
        result = b*(2*a - b)
    mem[n] = result
    return result