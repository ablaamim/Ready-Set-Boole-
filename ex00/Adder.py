from beartype import beartype # library to check the type of the arguments
import sys

@beartype # Decorator to check the type of the arguments
def adder(a: int, b: int) -> int:
    umax_int = 2**32 - 1
    if a < 0 or b < 0 or a > umax_int or b > umax_int:
        raise ValueError("Arguments must be positive integers and less than 2**32 - 1")
    return (a^b if a&b == 0 else adder(a^b, (a&b)<<1))

if __name__ == "__main__":
    x = 2 ** 32 - 2
    size_in_bytes = sys.getsizeof(x)
    print(size_in_bytes)
    try:
        print(adder(1, 2 ** 32 - 2))
    except Exception as e:
        print(e)
    try:
        print(adder(1, 2 ** 32 - 1))
    except Exception as e:
        print(e)