stack = [10, 5, 20, 3, 8]

if not stack:
    print("Stack is empty")
else:
    minimum = stack[0]

    for n in stack:
        if minimum > n:
            minimum = n

    print("Minimum element:",minimum)