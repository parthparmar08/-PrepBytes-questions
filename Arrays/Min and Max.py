# Function to find the minimum and maximum elements
def find_min_max(arr):
    min_val = float('inf')  # Initialize min_val to positive infinity
    max_val = float('-inf')  # Initialize max_val to negative infinity
    
    for num in arr:
        if num < min_val:
            min_val = num
        if num > max_val:
            max_val = num
    
    return min_val, max_val


# Read the number of test cases
T = int(input())

# Iterate through each test case
for _ in range(T):
    # Read the length of the array
    N = int(input())
    
    # Read the array elements
    arr = list(map(int, input().split()))
    
    # Find the minimum and maximum elements
    min_val, max_val = find_min_max(arr)
    
    # Print the result
    print(min_val, max_val)