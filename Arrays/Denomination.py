# Function to find the minimum number of denominations required
def find_min_denominations(change):
    denominations = [1000, 500, 100, 50, 20, 10, 5, 2, 1]
    count = 0

    for denomination in denominations:
        count += change // denomination
        change %= denomination

    return count


# Read the number of test cases
T = int(input())

# Iterate through each test case
for _ in range(T):
    # Read the change required
    N = int(input())

    # Find the minimum number of denominations required
    min_denominations = find_min_denominations(N)

    # Print the result
    print(min_denominations)