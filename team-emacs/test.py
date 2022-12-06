import ctypes

lib = ctypes.CDLL('./mylib.so')

lib.hello()
