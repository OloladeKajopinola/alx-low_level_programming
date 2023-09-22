import ctypes
mylib = ctypes.CDLL("./100-operations.so")
a = 3
b = 4
print("{} + {} = {}".format(a, b, mylib.add(a, b)))
print("{} - {} = {}".format(a, b, mylib.sub(a, b)))
print("{} x {} = {}".format(a, b, mylib.mul(a, b)))
print("{} / {} = {}".format(a, b, mylib.div(a, b)))
print("{} % {} = {}".format(a, b, mylib.mod(a, b)))
