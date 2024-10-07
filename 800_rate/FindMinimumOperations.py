#!/usr/bin/python3

def find_min_op(n, k):
    num_of_op = 0

    if (k == 1):
        print(n)
        return
    while (n > 0):
        num_of_op +=  n % k
        n = n // k

    print(num_of_op)

def main():
    t = int(input()) # number of test cases
    while(t > 0):
        n, k = map(int, input().split())
        find_min_op(n, k)
        t -= 1
main()
