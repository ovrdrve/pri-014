array = [1, 2, 4, 9, 12, 15, 16, 19, 21, 26, 27, 29, 31, 33, 34, 35, 41, 45, 49]


def binary_search(arr, key):
    if len(arr) == 0:
        return -1

    left = 0
    right = len(arr) - 1

    while left <= right:
        middle = (right + left) // 2

        if arr[middle] == key:
            return middle
        elif arr[middle] < key:
            left = middle + 1
        elif arr[middle] > key:
            right = middle - 1

    return -1


print(binary_search(array, 12))
