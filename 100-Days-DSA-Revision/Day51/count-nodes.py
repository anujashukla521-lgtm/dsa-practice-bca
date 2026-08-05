class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Create Nodes
first = Node(15)
second = Node(10)
third = Node(5)
fourth = Node(20)

# Connect Nodes
first.next = second
second.next = third
third.next = fourth

# Head of linked list
head = first

temp = head
count = 0
while temp:
    count+=1
    temp = temp.next

print("Total nodes:",count)