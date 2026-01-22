#1)Write a python prg to find num even or odd
num=int(input("enter a num"))
if num%2==0:
    print("num   is even ")
else:
        print("num is odd")


#2)create a python function that returns the square of a number
def square(num):
    return num*num
    
    
result=square(5)
print("the square is",result)


#3)write a prg to find largest of all three numbers
num1 = int(input("Enter num1:"))
num2 = int(input("Enter num2:"))
num3 = int(input("Enter num3:"))

if num1 > num2 and num1 > num3:
    print("num1 is greater")
elif num2 > num1 and num2 > num3:
    print("num2 is greater")
else:
    print("num3 is greater")


#4)write a program to create a the sum of all elements in a list
numbers = [1, 2, 3, 4, 10]
print("Sum of all elements:", sum(numbers))


#5)write apython prg to reverse a string
string = input("Enter a string: ")
reversed_string = string[::-1]
print("Reversed string:", reversed_string)


#6)to check if a given word is palindrome or not
word = input("Enter a word: ")

if word == word[::-1]:
    print(word, "is a palindrome")
else:
    print(word, "is not a palindrome")

#7)write a prg to find the factorial of a number using recursion

def factorial(n):
    if n==0 or n==1:
        return 1
    else:
     return n*factorial(n-1)
num=int(input("Enter a number:"))
print("Factorial:", factorial(num))
            

#8)Write a prg to check if a given number is a prime num.
num= int(input("Enter a number: "))
if num > 1:
    for i in range(2, num):
        if num%i ==0:
            print("not a prime number")
            break
    else:
            print("prime number")
else:
     print("not a prime number")

#9) Write a prg for sequential search.
arr = [10, 25, 30, 45, 50]
key = int(input("Enter number to search: "))

for i in range(len(arr)):
    if arr[i] == key:
        print(f"Found at index {i}")
        break
else:
    print("Not found")


#9) Write a prg for sequential search.
arr = [10, 25, 30, 45, 50]
key = int(input("Enter number to search: "))

for i in range(len(arr)):
    if arr[i] == key:
        print(f"Found at index {i}")
        break
else:
    print("Not found")


#9) Write a prg for sequential search.
arr = [10, 25, 30, 45, 50]
key = int(input("Enter number to search: "))

for i in range(len(arr)):
    if arr[i] == key:
        print(f"Found at index {i}")
        break
else:
    print("Not found")



9) Write a prg for sequential search.
arr = [10, 25, 30, 45, 50]
key = int(input("Enter number to search: "))

for i in range(len(arr)):
    if arr[i] == key:
        print(f"Found at index {i}")
        break
else:
    print("Not found")

#9) Write a prg for sequential search.
arr = [10, 25, 30, 45, 50]
key = int(input("Enter number to search: "))

for i in range(len(arr)):
    if arr[i] == key:
        print(f"Found at index {i}")
        break
else:
    print("Not found")





