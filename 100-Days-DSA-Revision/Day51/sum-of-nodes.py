class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

first = Node(5)
second = Node(4)
third = Node(8)
fourth = Node(3)

first.next = second
second.next = third
third.next = fourth

head = first

temp = head
sum = 0
while temp:
    sum = sum+temp.data
    temp = temp.next

print("Sum of nodes:",sum)

