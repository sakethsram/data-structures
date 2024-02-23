def add(a):
    res= 0  
    for i in a:
        res = res+ i  
   
    return res


def add2(*a):
    res = 0
    for i in a:
        res = res+ i  
    return res

def  display(**data):
    print(data)
    return data

data = "saketh,moksha,sunny"
name = data.split(",")
print(name)
print(type(name))
