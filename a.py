l1 = ['HELP','ANNA','MUG','SUM']
l2 = ['AID','MARY','CUP','PRODUCT']

s = input()
if s in l1 and len(s) <=10:
    print("YES")
elif s in l2:
    print("NO")
else:
    break