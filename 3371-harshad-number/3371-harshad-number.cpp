class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        // Calculate the sum of the digits of x
        int sum = 0;
        int originalX = x; // Store the original value of x
        while (x > 0) {
            sum += x % 10; // Add the last digit of x to sum
            x /= 10;       // Remove the last digit from x
        }

        // Check if the original number is divisible by the sum of its digits
        if (originalX % sum == 0) {
            return sum; // x is a Harshad number, return the sum of the digits
        } else {
            return -1; // x is not a Harshad number, return -1
        }
    }
};
