class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def middle_node(head):
    slow = head
    fast = head
    while fast is not None and fast.next is not None:
        slow = slow.next
        fast = fast.next.next

    return slow

first = Node(5)
second = Node(11)
third = Node(9)
fourth = Node(2)
fifth = Node(12)

first.next = second
second.next = third
third.next = fourth
fourth.next = fifth

head = first
print("Middle node",middle_node(head).data)

