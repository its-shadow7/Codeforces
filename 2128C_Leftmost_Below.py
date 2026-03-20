for _ in range(int(input())):
 
    n = int(input())
    arr = list(map(int,input().split()))
 
    minn = 10**9
    ans = "YES"
    for i in range(len(arr)):
        if arr[i]>= 2*minn:
            ans = "NO"
            break
        minn=min(minn,arr[i])
    print(ans)