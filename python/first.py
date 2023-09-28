def hello():
    print("hello world")

def name(name):
    print(f"My name is {name}")

def addition(a,b):
    print(a+b)

def multiplication(a,b):
    mul = a * b
    return mul

def info(name, age=24):
    print(f"my name is {name} and my age is {age}")


def names(*values):
    print(values[1])
    print(values)


def cricketers(*args):
    print(args[9])
    print(args[-1])

def detail_info(**kwargs):
    print(kwargs)
    print(kwargs['age'])


if __name__ == '__main__':
    hello()
    name("john")
    addition(5, 7)
    value = multiplication(5, 3)
    print(value)
    info(name="king", age=21)
    # info("king")
    cricketers("dhoni", 40, 7)
    # names("moksha", "vishnu", "sunny", "saketh", 89)
    detail_info(name="dheeraj", height=6, age=24)

