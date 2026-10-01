import sys

if len(sys.argv) != 2:
    print("Missing Command Line Argument")
else:
    print(f"hello,{sys.argv[1]}")