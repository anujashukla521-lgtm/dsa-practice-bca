class Stack:
    def __init__(self):
        self.stack = []

    def push(self, data):
        self.stack.append(data)

    def pop(self):
        if not self.stack:
            return "Stack underflow"
        
        return self.stack.pop()

    def peek(self):
        if not self.stack:
            return "Stack is empty"

        return self.stack[-1]

    def display(self):
        if not self.stack:
            print("Stack is empty")
            return

        print("Stack")
        for item in reversed(self.stack):
            print("|",item,"|")

        print("------")

        

    def is_empty(self):
        return len(self.stack) == 0

    def size(self):
        return len(self.stack)


def main():
    s = Stack()
    while True:
        try:
            choice = int(input("""
                    1- Push an element
                    2- Pop last element
                    3- Peek top element
                    4- Display stack
                    5- Check empty
                    6- Check size
                    7- Exit
                    Enter your choice: """))
            match choice:
                case 1:
                    data = int(input("Enter data to push: "))
                    s.push(data)

                case 2:
                    print(s.pop())

                case 3:
                    print(s.peek())

                case 4:
                    s.display()
                    
                case 5:
                    print(s.is_empty())

                case 6:
                    print(s.size())

                case 7:
                    print("Exit")
                    break
                case _:
                    print("Invalid choice")
        except Exception:
            print("Choice must be a value")

main()