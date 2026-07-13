import re

def solution(myString):
    result = re.sub('[a-l]', 'l', myString)
    return result