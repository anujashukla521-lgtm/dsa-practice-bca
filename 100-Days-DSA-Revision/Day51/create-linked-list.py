class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Create Nodes
first = Node(10)
second = Node(20)
third = Node(30)
fourth = Node(40)

# Connect Nodes
first.next = second
second.next = third
third.next = fourth

# Head of linked list 
head = first

# Traverse and print
temp = head

while temp:
    print(temp.data, end=" ")
    temp = temp.next