import ctypes
mylib = ctypes.CDLL("./100-operations.so")
a = 3
b = 4
print("{} + {} = {}".format(a, b, mylib.add(a, b)))
