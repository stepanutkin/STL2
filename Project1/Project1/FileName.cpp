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

    // �������� ����������
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());

    // ���������� � ������� ��������
    std::sort(numbers.rbegin(), numbers.rend());

    // ����� ����� ��� ���������� � ������� ��������
    for (int num : numbers)
    {
        std::cout << num << " ";
    }

    return 0;
}