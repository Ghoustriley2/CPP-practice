#include <iostream>
#include <vector>
#include <string>

static class UniversalStandard {
public:
    static void set_numbers(std::vector<int>& numbers) {
        for (int i = 1; i <= 10; i++) {
            numbers.push_back(i);
        }
    }

    static void print_nums(const std::vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            std::cout << nums[i] << std::endl;
        }
    }

    static void cls() {
        std::system("cls");
    }
};

// defining

#define unvstd UniversalStandard

// ---

int main()
{
    unvstd unvtest;

    std::string program = "hello world";
    std::cout << "hello world" << std::endl;
    std::cout << program << std::endl;

    std::vector<int> numbers;
    unvtest.set_numbers(numbers);
    std::cout << numbers.size() << std::endl;
    unvtest.print_nums(numbers);

    std::system("pause");
    unvtest.cls();

    return 0;
}