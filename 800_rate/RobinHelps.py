#!/usr/bin/python3

def main():
    t = int(input())

    while(t > 0):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        gold = 0
        ppl = 0
        for ele in a:
            if ele >= k:
                gold += ele
            elif ele == 0 and gold > 0:
                ppl += 1
                gold -=1
        print(ppl)
        t -= 1


main()
