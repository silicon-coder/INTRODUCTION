# Python3 program to find maximum
# in arr[] of size n

# Function to find maximum
# in arr[] of size n
def largest(arr,n):
# Initialize maximum element
mx = arr[0]		

# Traverse array elements from second		
# and compare every element with		
# current max		
for i in range(1, n):		
	if arr[i] > mx:		
		mx = arr[i]
		
return mx

# Driver Code
arr = [10, 324, 45, 90, 9808]
n = len(arr)

Ans = largest(arr,n)

print ("Largest in given array is",Ans)
