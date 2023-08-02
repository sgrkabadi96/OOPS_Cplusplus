#include <iostream>

class ShallowCopyExample
{
public:
    int *data;

    ShallowCopyExample()
    {
        data = new int[5];
        for (int i = 0; i < 5; ++i)
            data[i] = i;
    }

    // Copy constructor implementing shallow copy
    ShallowCopyExample(const ShallowCopyExample &other)
    {
        data = other.data; // Shallow copy: copying the pointer, not the data
    }

    ~ShallowCopyExample()
    {
        delete[] data;
    }
};

class DeepCopyExample
{
public:
    int *data;

    DeepCopyExample()
    {
        data = new int[5];
        for (int i = 0; i < 5; ++i)
            data[i] = i;
    }

    // Copy constructor implementing deep copy
    DeepCopyExample(const DeepCopyExample &other)
    {
        data = new int[5];
        for (int i = 0; i < 5; ++i)
            data[i] = other.data[i]; // Deep copy: copying the data, not just the pointer
    }

    ~DeepCopyExample()
    {
        delete[] data;
    }
};

int main()
{
    // Shallow copy example
    ShallowCopyExample originalShallow;
    ShallowCopyExample shallowCopy = originalShallow;

    // Deleting the originalShallow will cause the shallowCopy's data pointer to become a dangling pointer
    delete[] originalShallow.data;

    // Trying to access the shallowCopy's data now will lead to undefined behavior
    std::cout << "Shallow Copy - Potential undefined behavior: " << shallowCopy.data[0] << std::endl;

    // Deep copy example
    DeepCopyExample originalDeep;
    DeepCopyExample deepCopy = originalDeep;

    // Deleting the originalDeep will not affect the deepCopy's data
    delete[] originalDeep.data;

    // Accessing deepCopy's data is still valid because it has its own independent copy
    std::cout << "Deep Copy - Valid data: " << deepCopy.data[0] << std::endl;

    return 0;
}
