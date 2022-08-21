#include <iostream>
#include <array>

class Iterator
{
public:
    Iterator(const std::array<int, 7>& arr)
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
    const std::array<int, 7>& array;
    int index;
};

int main()
{
    std::array<int, 7> arr = { 12, 23, 12, 34, 1, 2, 5 };

    for ( Iterator iter(arr); iter != iter.end(); ++iter )
    {
        std::cout << *iter << std::endl;
    }

    return 0;
}
