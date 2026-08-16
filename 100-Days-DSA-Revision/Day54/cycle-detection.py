class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def cycle_detection(head):
    slow = head
    fast = head
    while fast is not None and fast.next is not None:
        slow = slow.next
        fast = fast.next.next

        if slow == fast:
            return True
    return False

first = Node(5)
second = Node(11)
third = Node(9)
fourth = Node(2)
fifth = Node(12)
sixth = Node(7)

first.next = second
second.next = third
third.next = fourth
fourth.next = fifth
fifth.next = sixth
sixth.next = fifth

head = first
print("Cycle exists:",cycle_detection(head))

