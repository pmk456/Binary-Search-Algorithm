def binary_search(arr: iter, n: int) -> int:
    lower: int = 0
    upper: int = len(arr) - 1
    while(lower<=upper):
        mid: int = (lower+upper) // 2
        if arr[mid] == n: return mid
        elif arr[mid] < n: lower = mid + 1
        else: upper = mid - 1
    return -1
if __name__ == "__main__":
    lst: list = [1, 3, 6, 9, 12, 45, 66, 99, 128]
    result: int = binary_search(lst, 45)
    if result != -1: print(f"Found At Index {result}")
    else: print("Not Found")
