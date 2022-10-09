# method1
arr = list(map(int,input().split()))
d = int(input())

def rotate_arr(arr,d):
    temp = arr[:d]
    for i in range(d):
        arr.pop(0)
    arr += temp

rotate_arr(arr, d)
print(arr)

# method2
def rotate_arr(arr,d):
    for i in range(d):
        arr.append(arr[0])
        arr.pop(0)

rotate_arr(arr, d)
print(arr)

