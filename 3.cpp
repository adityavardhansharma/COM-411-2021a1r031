#include<iostream>
#include<string.h>
#include<math.h>
class static_demo {
public:
    // Static function to find the factorial of a number recursively
    static int factorial(int n) {
        if (n <= 1) {
            return 1;
        } else {
            return n * factorial(n-1);
        }
    }

    // Static function to check whether a number is prime or not
    static bool is_prime(int n) {
        if (n <= 1) {
            return false;
        }

        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
};
int main() {
    int num = 5;
    int fact = static_demo::factorial(num);
    std::cout << " Factorial of " << num << " is " << fact << std::endl;

    int prime_num = 7;
    bool prime = static_demo::is_prime(prime_num);
    if (prime)
    {
        std::cout << prime_num << " is a prime number." << std::endl;
    }
     else
    {
        std::cout << prime_num << " is not a prime number." << std::endl;
    }

    return 0;
}
