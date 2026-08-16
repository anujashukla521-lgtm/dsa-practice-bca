class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def reverse(head):
    curr = head
    prev = None
    while curr != None:
        next_node = curr.next
        curr.next = prev
        prev = curr
        curr = next_node
    return prev

def display(head):
    temp = head
    while temp is not None:
        print(temp.data,end="->")
        temp = temp.next
    print(None)

first = Node(5)
second = Node(11)
third = Node(9)
fourth = Node(2)

first.next = second
second.next = third
third.next = fourth

head = first

display(head)
head = reverse(head)
display(head)