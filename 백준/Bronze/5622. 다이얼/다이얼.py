l1 = [["A","B","C"], ["D","E","F"],["G","H","I"],["J","K","L"],["M","N","O"],["P","Q","R","S"],["T","U","V"],["W","X","Y","Z"]]
a = input()
l2 = list(a)
res = 0
for i in range(len(l1)):
    for j in range(len(l1[i])):
        for k in range(len(l2)):
            if l2[k] in l1[i][j]:
                res += i+3
print(res)