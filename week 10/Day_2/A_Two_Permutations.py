# MD Rifat Hossain
# Country: Bangladesh

import sys
import math

# Constants
PI = 3.1415926535897932384626433832795
MAX_N = int(1e5) + 5
MOD = int(1e9) + 7
INF = int(1e9)
EPS = 1e-9

# Function to solve each test case
def solve():
    # _THE^MAXTAN_
    n = int(input())
    a = int(input())
    b = int(input())

    if a == n and b == n:
        print("Yes")
    elif a + b <= n - 2:
        print("Yes")
    else:
        print("No")

# Fast I/O setup
input = sys.stdin.read
data = input().split()
t = int(data[0])
index = 1

# Process each test case
for _ in range(t):
    n = int(data[index])
    a = int(data[index + 1])
    b = int(data[index + 2])
    index += 3
    
    # Check conditions and print result for the test case
    if a == n and b == n:
        print("Yes")
    elif a + b <= n - 2:
        print("Yes")
    else:
        print("No")
