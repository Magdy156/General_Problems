#!/usr/bin/python3

def maximumScore(t, test_cases):
    results = []
    for i in range(t):
        length = test_cases[i][0]
        a = test_cases[i][1]

        maxVal = max(a)
    
        max_indices = [i for i in range(length) if a[i] == maxVal]
        bestScore = 0

        for idx in max_indices:
            count = 1
            for _ in range(idx + 2, length, 2):
                count += 1

            for _ in range(idx - 2, -1, -2):
                count += 1

            max_score = maxVal + count
            bestScore = max(max_score, bestScore)
        results.append(bestScore)
    return results


def main():
    t = int(input())  # number of test cases
    num = t
    test_cases = []
    while(t > 0):
        n = int(input()) # array length
        a = list(map(int, input().split()))
        test_cases.append((n, a))
        t -= 1

    # Compute and print results
    results = maximumScore(num, test_cases)
    for result in results:
        print(result)
main()
