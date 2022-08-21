#include <iostream>
#include <array>
#include <vector>
#include <set>


template<typename T>
class Iterator
{
public:
    Iterator(const T& arr)
        : array(arr)
    {
        index = 0;
    }

    ~Iterator() {}

    bool operator!=(const Iterator& other)
    {
        return !(*this == other);
    }

    bool operator==(const Iterator& other)
    {
        return (this->array == other.array) && (this->index == other.index);
    }

    int operator*()
    {
        return array.at(index);
    }

    Iterator& operator++()
    {
        index += 1;

        return *this;
    }

    Iterator begin()
    {
        Iterator out = Iterator(array);
        out.index = 0;

        return out;

        // this->index = 0;

        // return *this;
    }

    Iterator end()
    {
        Iterator out = Iterator(array);
        out.index = array.size();

        return out;
    }

private:
    const T& array;
    int index;
};

int main()
{
    // compilation error: 
    // std::set<int> arr = { 12, 23, 12, 34, 1, 2, 5, 34, 12312 };
    // Iterator<std::set<int>> iter(arr);

    // std::array<int, 9> arr = { 12, 23, 12, 34, 1, 2, 5, 34, 12312 };
    // Iterator<std::array<int, 9>> iter(arr);

    std::vector<int> arr = { 12, 23, 12, 34, 1, 2, 5, 34, 12312 };
    Iterator<std::vector<int>> iter(arr);

    for ( ; iter != iter.end(); ++iter )
    {
        std::cout << *iter << std::endl;
    }

    return 0;
}
