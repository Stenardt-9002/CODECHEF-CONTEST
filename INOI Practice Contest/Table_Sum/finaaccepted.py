n = int(input())
lis_t = list(map(int,input().split()))
store_max_idx = []
max_val = -1
for i in range(len(lis_t)):
    lis_t[i]+=i+1
    if max_val<lis_t[i]:
        max_val = lis_t[i]
        store_max_idx.append(i)
        pass
val_to_print = 0

for last in range(n-1,-1,-1):
    val_to_print = lis_t[store_max_idx[-1]]+n-1-last
    print(val_to_print,end = " ")
    if store_max_idx[-1]==last:
        store_max_idx = store_max_idx[:-1]
        pass
    lis_t[last]=lis_t[last]-n
    pass
print()