#include <iostream>
#include <cmath>
using namespace std;

// Function to count the number of digits in a number
int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int num)
{
    int originalNum = num;
    int numDigits = countDigits(num);
    int sum = 0;

    while (num != 0)
    {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int num;
        cin >> num;

        if (isArmstrong(num))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
