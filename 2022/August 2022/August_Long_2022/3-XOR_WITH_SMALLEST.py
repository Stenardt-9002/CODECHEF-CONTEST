import heapq as heap 


testcase = int(input()) 
for _ in range(testcase):
    n ,y , x = map(int, input().split())
    if(n==1):
        a = int(input())
        if(x%2==0):
            print(a)
        else :
            print(a^y)
    else :
        a = list(map(int , input().split()))
        heap.heapify(a)
        i=0 
        while(i<x):
            firs = heap.heappop(a)
            second = firs^y 
            heap.heappush(a, second)
            
            third = heap.heappop(a)
            i+=1 
            if(third==second):
                if(x-i)%2==0:
                    heap.heappush(a,third)
                    break 
                else :
                    heap.heappush(a,firs)
                    break 
            else : 
                heap.heappush(a,third)
        
        a.sort()
        print(*a)


