class Solution:
   def missingNumber(self, arr):
    n=len(arr)
    for i in range(n):
        if not 0<arr[i]<=n:
            arr[i]=n+1
    for item in arr:
        pos=abs(item)
        if pos<=n:
            arr[pos-1]=-1*abs(arr[pos-1])
    for i in range(n):
        if arr[i]>0:
            return i+1
    return n+1