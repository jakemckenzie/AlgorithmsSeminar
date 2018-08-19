# Rules: X,Y > 0
def game_of_Stanley_Gill(X,Y):
    x = X
    u = X
    y = Y
    v = Y
    while x != y:
        if x > y:
            x = x - y
            u = v + u
        elif y > x:
            y = y - x
            v = u + v
    print((x + y) >> 1) #GCD(X,Y)
    print((u + v) >> 1) #LCM(X,Y)
game_of_Stanley_Gill(36,10)