class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        if num <= 1:
            return False  # 1 and any number less than it cannot be perfect numbers

        divisors = set()
        for i in range(1, int(num**0.5) + 1):
            if num % i == 0:
                divisors.add(i)
                if i != num // i:  # Avoid adding the square root divisor twice if it's perfect square
                    divisors.add(num // i)
        
        divisors.remove(num)  # Remove the number itself from the divisors
        
        return sum(divisors) == num
