string = input()

res = ''
for char in string :
    if char.isupper() :
        res += char.lower()
    else :
        res += char.upper()
    
print(res)