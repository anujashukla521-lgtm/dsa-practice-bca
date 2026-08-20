original = [1, 2, 3, 4, 5]
stack = original.copy()

def display(stack):
    for item in stack:
        print(item)

reversed_stack = []

while len(original) != 0:
    reversed_item = original.pop()
    reversed_stack.append(reversed_item)

print("Original")
display(stack)

print("Reversed")
display(reversed_stack)