stack = []
size = 3

def push(value):
    if len(stack) >= size:
        print("Stack overflow")
        return

    stack.append(value)

push(12)
push(7)
push(2)
push(2)
