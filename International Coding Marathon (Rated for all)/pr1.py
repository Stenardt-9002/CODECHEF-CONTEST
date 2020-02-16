t = int(input())
while t>0:
    t-=1;
    a,b,c,d = map(int,input().split())
    if a>b:
        a = a-b
    else:
        a = b-a


    if d>c:
        d = d-c
    else:
        d = c-d

    if (a == 0 or (a/d==a//d)):
        print("YES")
    else:
        print("NO")
