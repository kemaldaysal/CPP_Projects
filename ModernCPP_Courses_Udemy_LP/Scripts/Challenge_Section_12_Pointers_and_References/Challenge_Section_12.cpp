#include <iostream>
using namespace std;

int *apply_all(const int *const arr_1, const size_t size_arr1, const int *const arr_2, const size_t size_arr_2);
void print_array(const int *const arr, const size_t size_of_arr);

int main(void)
{
    int arr_1[]{1, 2, 3, 4, 5, 6, 7};
    int arr_2[]{10, 20, 30, 40, 50};

    size_t len_arr_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    size_t len_arr_2 = sizeof(arr_2) / sizeof(arr_2[0]);

    size_t product_size = len_arr_1 * len_arr_2; 

    int *address_alloc = apply_all(arr_1, len_arr_1, arr_2, len_arr_2);

    print_array(address_alloc, product_size);

    delete[] address_alloc;

    return 0;
}

int *apply_all(const int *const arr_1, const size_t size_arr1, const int *const arr_2, const size_t size_arr_2)
{
    const size_t alloc_size{size_arr1 * size_arr_2};

    int *address_alloc{new int[alloc_size]};
    
    for (size_t i{}; i < size_arr_2; i++)
    {
        for (size_t j{}; j < size_arr1; j++)
        {
            static size_t pos{};
            address_alloc[pos++] = arr_2[i] * arr_1[j];
        }
    }
    return address_alloc;
}

void print_array(const int *const arr, const size_t size_of_arr)
{
    for (size_t i{}; i < size_of_arr; i++)
        cout << arr[i] << " ";

    cout << endl;
}