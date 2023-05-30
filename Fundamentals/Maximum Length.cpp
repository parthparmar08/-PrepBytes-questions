#include <iostream>

using namespace std;

int maxLength = 0;

void findMaxLength(long long currentNumber, long long X, long long Y, int currentLength)
{
    if (currentNumber > Y)
    {
        return;
    }

    maxLength = max(maxLength, currentLength);

    if (currentNumber * 2 <= Y && currentNumber * 2 % currentNumber == 0)
    {
        findMaxLength(currentNumber * 2, X, Y, currentLength + 1);
    }
}

int main()
{
    // Read the input values of X and Y
    long long X, Y;
    cin >> X >> Y;

    // Find the maximum length
    findMaxLength(X, X, Y, 1);

    // Print the maximum length
    cout << maxLength << endl;

    return 0;
}