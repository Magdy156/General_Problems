#!/usr/bin/python3

def getNumberOfLeaves(n , k):
    start_year = max(1, n - k + 1)
    
    number_of_terms = n - start_year + 1
    
    total_leaves = (start_year + n) * number_of_terms // 2
    
    if total_leaves % 2 == 0:
        print("YES")
    else:
        print("NO")


def main():
    t = int(input())

    while t > 0:
        n, k = map(int, input().split())
        getNumberOfLeaves(n, k)
        t -= 1

main()
