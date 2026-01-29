#1)Write a python prg to find num even or odd
num=int(input("enter a num"))
if num%2==0:
    print("num is even ")
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


#1)BUBBLE SORT
def bubble_sort(arr):
    n=len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1]=arr[j+1],arr[j]
                
arr=[2,45,65,1,35,36]
bubble_sort(arr)
print("sorted array",arr)


#2)SELECTION SORT
def selection_sort(arr):
    n=len(arr)
    for i in range(n):
        min_idx=i
        for j in range(i+1,n):
         if arr[j]<arr[min_idx]:
            min_idx=j
        arr[j],arr[min_idx]=arr[min_idx],arr[i]
        
arr=[30,40,38,14,27]
selection_sort(arr)
print("sorted array",arr)

  
 # 3)SEQUENTIAL SEARCH

  def sequential_search(arr,key):
    for i in range(len(arr)):
     if arr[i]==key:
        return i
    return -1
arr=[10,20,45,67,80,53]
key=10
result=sequential_search(arr,key)
if result!=-1:
    print("Elementfound at index",result)
else:
    print("Element not found")
    

#4)RABIN KARP
def rabin_karp(text,pattern):
 d=234
 q=101
 m=len(pattern)
 n=len(text)
 p=0
 t=0
 h=1
 for i in range(m-1):
    h=(h*d)%q
    
 for i in range(m):
    p=(d*p+ord(pattern[i]))%q
    t=(d*t+ord(text[i]))%q
    
 for i in range(n - m + 1):
  if p == t:
   if text[i:i + m] == pattern:
    print("Pattern found at index", i)
    
  if i < n - m:
   t = (d * (t - ord(text[i]) * h) + ord(text[i + m])) % q
   if t < 0:
    t += q
   
text = "GEEKS FOR GEEKS"
pattern = "GEEK"
rabin_karp(text, pattern)


#5) TRAVELLING SALES MAN
import itertools
import sys

def travelling_salesman(graph,start):
 n=len(graph)
 vertices=[i for i in range(n) if i !=start]
 min_cost=sys.maxsize
 for perm in itertools.permutations(vertices):
     cost=graph[start][perm[0]]
     for i in range(len(perm)-1):
  
      cost += graph[perm[i]][perm[i + 1]]
     cost += graph[perm[-1]][start]
     min_cost = min(min_cost, cost)
 return min_cos
 
 graph=[[1,10,15,20],[10,0,25,35],[15,35,0,30],[20,25,30,0]]
 print("Minimum cost:", travelling_salesman(graph, 0))
 
#6)KNAP SACK PROBLEM
def knapsack(W,wt,val,n):
     dp = [[0 for _ in range(W + 1)] for _ in range(n + 1)]
     
     for i in range(n+1):
         for W in range(W+1):
             if i == 0 or w == 0:
              dp[i][w] = 0
             elif wt[i - 1] <= w:
              dp[i][w] = max(
              val[i - 1] + dp[i - 1][w - wt[i - 1]],
              dp[i - 1][w]
             )
         else:
           dp[i][w] = dp[i - 1][w]
           return dp[n][W]
val = [60, 100, 120]
wt = [10, 20, 30]
W = 50
n = len(val)
print("Maximum value:", knapsack(W, wt, val, n))