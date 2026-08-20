stack = []

def push(value):
    stack.append(value)

def is_empty(stack):
    count = 0 
    for i in stack:
        count += 1

    if count == 0:
        print("Stack is empty")
    else:
        print("Stack is not empty")

push(3)
push(63)
push(1)
is_empty(stack)