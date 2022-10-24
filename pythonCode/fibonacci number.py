def fibonacci_number(n):
    if n == 0:
        

        return 0
    
    if n == 1:
        
        return 1
    else:
        return fibonacci_number(n-1) + fibonacci_number(n-2)

print(fibonacci_number(int(input())))
print("python nahi aaundi menu")

