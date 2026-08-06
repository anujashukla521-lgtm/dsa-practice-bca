class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_beginning(self, data):
        temp = Node(data)
        temp.next = self.head
        self.head = temp

    def insert_end(self, data):
        temp = Node(data)
        if self.head is None:
            self.head = temp
        else:
            ptr = self.head
            while ptr.next is not None:
                ptr = ptr.next

            ptr.next = temp
            
    def insert_at_position(self, data, position):
        temp = Node(data)

        if position <= 0:
            print("Invalid position")
            return
        
        if position == 1:
            self.insert_beginning(data)
            return
        
        if self.head is None:
            print("Invalid Position")
            return

        ptr = self.head
        count = 1
        while count < position - 1 and ptr.next!=None:
            count += 1
            ptr = ptr.next

        if count != position - 1:
            print("Invalid Position")
            return

        temp.next = ptr.next
        ptr.next = temp

    def delete_beginning(self):
        if self.head is None:
            print("Linked list is empty")
            return

        self.head = self.head.next

    def delete_end(self):
        if self.head is None:
            print("Linked list is empty")
            return

        if self.head.next is None:
            self.head = None
            return

        ptr = self.head
        while ptr.next.next is not None:
            ptr = ptr.next

        ptr.next = None

    def delete_at_position(self, position):
        if position <= 0:
            print("Invalid position")
            return

        if self.head is None:
            print("Linked list is empty")
            return

        if position == 1:
            self.delete_beginning()
            return

        ptr = self.head
        count = 1

        while count < position - 1 and ptr.next is not None:
            count += 1
            ptr = ptr.next

        if count != position - 1 or ptr.next is None:
            print("Invalid Position")
            return

        ptr.next = ptr.next.next

    def display(self):
        if self.head is None:
            print("Linked list is empty")
            return
        ptr = self.head
        while ptr is not None:
            print(ptr.data,end="->")
            ptr = ptr.next
        print(None)


def main():
    ll = LinkedList()
    while True:
        choice = int(input("""Enter a choice: 
        1 Insert Beginning
        2 Insert End
        3 Insert Position
        4 Delete Beginning
        5 Delete End
        6 Delete Position
        7 Display
        8 Exit      """))
        match choice:
            case 1:
                data = int(input("Enter data: "))
                ll.insert_beginning(data)

            case 2:
                data = int(input("Enter data: "))
                ll.insert_end(data)

            case 3:
                data = int(input("Enter data: "))
                position = int(input("Enter position: "))
                ll.insert_at_position(data, position)

            case 4:
                ll.delete_beginning()

            case 5:
                ll.delete_end()

            case 6:
                position = int(input("Enter position: "))
                ll.delete_at_position(position)

            case 7:
                ll.display()

            case 8:
                print("Exit")
                break

            case _:
                print("Invalid choice")

main()


