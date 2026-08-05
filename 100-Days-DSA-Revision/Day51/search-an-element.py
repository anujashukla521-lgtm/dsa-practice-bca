class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

first = Node(6)
second = Node(7)
third = Node(1)
fourth = Node(5)
fifth = Node(3)

first.next = second
second.next = third
third.next = fourth
fourth.next = fifth

head = first

temp = head
search = int(input("Enter an element to search: "))

while temp:
    if search == temp.data:
        print("Element found")
        break
    temp = temp.next

else:
    print("Element not found")