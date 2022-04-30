a = input()
list_a = list(a)
dict_a = {}
for i in list_a:
    if i in dict_a:
        dict_a[i] +=1
    else:
        dict_a[i] = 1
ans_freq = dict_a[a[0]]
ans = a[0]
for item in dict_a:
    if dict_a[item] > ans_freq:
        ans_freq = dict_a[item]
        ans = item
print(ans)