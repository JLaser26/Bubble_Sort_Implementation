def Sort(arr: list):
    temp = 0
    length = len(arr)
    for i in range(length-1):
        for j in range(length-i-1):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
    return arr
