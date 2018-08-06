def binary_sum(x):
    if len(x) == 0: return 0;
    if len(x) == 1: return x[0];

    y = []
    for i in range(1,len(x),2):#range(start,stop,step)
        y.append(x[i - 1] + x[i])
    if i + 1 < len(x):
        y[0] += x[i + 1]
    
    return binary_sum(y)