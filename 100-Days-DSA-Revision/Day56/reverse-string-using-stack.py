stack = []

string = input("Enter a string: ")

for i in string:
    stack.append(i)


reversed_stack = []

while len(stack) != 0:
    reversed_char = stack.pop()
    reversed_stack.append(reversed_char)

print(reversed_stack)