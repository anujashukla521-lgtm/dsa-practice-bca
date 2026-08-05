class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
first = Node(7)
second = Node(2)
third = Node(15)
fourth = Node(9)
fifth = Node(11)

first.next = second
second.next = third
third.next = fourth
fourth.next = fifth

head = first

temp = head 

max_element = head.data

while temp:
    if max_element < temp.data:
        max_element = temp.data
    temp = temp.next

print("Maximum element:",max_element)