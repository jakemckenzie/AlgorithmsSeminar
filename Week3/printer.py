def printer(n):
    if n > 1:
        print("Still going!")
        printer(n/2)
        printer(n/2)