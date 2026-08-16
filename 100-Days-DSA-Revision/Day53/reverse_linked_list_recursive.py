class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def reverse(head):
    if head == None or head.next == None:
        return head

    new_head = reverse(head.next)
    front = head.next
    front.next = head
    head.next = None
    return new_head

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