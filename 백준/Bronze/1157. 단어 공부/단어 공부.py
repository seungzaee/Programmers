a = input().upper()
s_set = list(set(a))
cnt = []
for i in s_set:
    cnt.append(a.count(i))
if cnt.count(max(cnt)) > 1:
    print("?")
else:
    print(s_set[cnt.index(max(cnt))])