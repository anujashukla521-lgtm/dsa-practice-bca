class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class doubly_linked_list:
    def __init__(self):
        self.head = None

    def insert_at_beginning(self, data):
        temp = Node(data)
        if self.head is None:
            self.head = temp
        else:
            temp.next = self.head
            self.head.prev = temp
            self.head = temp

    def insert_at_end(self,data):
        temp = Node(data)
        if self.head is None:
            self.head = temp
        else:
            ptr = self.head
            while ptr.next is not None:
                ptr = ptr.next

            ptr.next = temp
            temp.prev = ptr

    def insert_at_position(self, data, position):
        temp = Node(data)
        if position <= 0:
            print("Invalid position")
            return

        if position == 1:
            self.insert_at_beginning(data)
            return

        if self.head is None:
            print("Invalid position")
            return

        ptr = self.head
        count = 1
        while count < position - 1 and ptr.next is not None:
            count += 1
            ptr = ptr.next

        if count != position - 1:
            print("Invalid position")
            return

        temp.next = ptr.next
        if ptr.next is not None:
            ptr.next.prev = temp
        ptr.next = temp
        temp.prev = ptr

    def delete_at_beginning(self):
        if self.head is None:
            print("Linked list is empty")
            return

        self.head = self.head.next
        if self.head is not None:
            self.head.prev = None
     
    def delete_at_end(self):
        if self.head is None:
            print("Linked list is empty")
            return

        if self.head.next is None:
            self.head = None
            return

        p = self.head
        q = self.head.next
        while q.next is not None:
            p = p.next
            q = q.next
            

        p.next = None
        q = None

    def delete_at_position(self, position):
        if position <= 0:
            print("Invalid position")
            return

        if self.head is None:
            print("Linked list is empty")
            return
        
        if position == 1:
            self.delete_at_beginning()
            return

        p = self.head
        q = self.head.next
        count = 2

        while count < position and q.next is not None:
            p = p.next
            q = q.next
            count += 1

        if count != position:
            print("Invalid position")
            return 
        
        p.next = q.next
        if q.next is not None:
            q.next.prev = p


    def display(self):
        if self.head == None:
            print("Linked list has no nodes")
            return
        ptr = self.head
        print("Displaying nodes")

        while ptr is not None:
            print(ptr.data,end="<->")
            ptr = ptr.next
        print(None)

def main():
    ll = doubly_linked_list()
    while True:
        choice = int(input("""
        1- Insert at beginning
        2- Insert at end
        3- Insert at position
        4- Delete at beginning
        5- Deletd at end
        6- Delete at position
        7- Display
        8- Exit
        Enter your choice: """))

        match choice:
            case 1:
                data = int(input("Enter data: "))
                ll.insert_at_beginning(data)

            case 2:
                data = int(input("Enter data: "))
                ll.insert_at_end(data)

            case 3:
                data = int(input("Enter data: "))
                position = int(input("Enter position: "))
                ll.insert_at_position(data, position)

            case 4:
                ll.delete_at_beginning()

            case 5:
                ll.delete_at_end()

            case 6:
                position = int(input("Enter position: "))
                ll.delete_at_position(position)
            
            case 7:
                ll.display()

            case 8:
                print("Exit")
                break

            case _:
                print("Invalid input")


main()