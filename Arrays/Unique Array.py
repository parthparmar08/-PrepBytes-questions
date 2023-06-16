# Function to find the maximum length of the unique array
def find_max_length(T, test_cases):
    results = []

    for _ in range(T):
        N = int(test_cases[_][0])
        array = list(map(int, test_cases[_][1].split()))

        visited = set()
        max_length = 0

        for i in range(N):
            if i not in visited:
                current_length = 0
                current_element = i

                while current_element not in visited:
                    visited.add(current_element)
                    current_length += 1
                    current_element = array[current_element]

                max_length = max(max_length, current_length)

        results.append(str(max_length))

    return results


# Main function
if __name__ == '__main__':
    # Read the number of test cases
    T = int(input())

    # Read the test cases
    test_cases = []
    for _ in range(T):
        N = input()
        array = input()
        test_cases.append((N, array))

    # Find the maximum length of the unique array for each test case
    result = find_max_length(T, test_cases)

    # Print the results
    for res in result:
        print(res)