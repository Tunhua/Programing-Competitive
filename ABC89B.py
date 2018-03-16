#coding=utf-8

def solve(n, ss):
    return len(set(ss))

def main():
    n = int(input())
    ss = input().split('')
    ans = solve(n, ss)
    if ans == 3:
        print("Three")
    elif ans = 4:
        print("Four")

if __name__ == '__main__':
    main()
