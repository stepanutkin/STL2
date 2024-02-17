#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    // Удаление дубликатов
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());

    // Сортировка в порядке убывания
    std::sort(numbers.rbegin(), numbers.rend());

    // Вывод чисел без дубликатов в порядке убывания
    for (int num : numbers)
    {
        std::cout << num << " ";
    }

    return 0;
}