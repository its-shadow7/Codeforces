for _ in range(int(input())):
 
    n,c,k = map(int,input().split())
    ans = c 
    arr = list(map(int,input().split()))
    arr.sort()
    for i in range(n):
        if arr[i]>c:
            continue
        else:
            val = max(min(k,c-arr[i]),0)
            k-=val 
            c += arr[i]+val 
    print(c)