#include<bits/stdc++.h>

class LinearSearch
{
    private : 
        std::vector<int> array;
        int n;
        int key;

    public :
        LinearSearch(int a, int b);
        void getArray(int n);
        int search();
        LinearSearch()
        {

        }
};

LinearSearch::LinearSearch(int a, int b)
{
    n = a;
    key = b;
}
void LinearSearch::getArray(int n)
{
    for(auto i = 0 ; i < n ; ++i)
    std::cin >> array[i];
}
int LinearSearch::search()
{
    for(int i = 0 ; i < n ; ++i)
    if(array.at(i )== key)
    return i;

    return -1;
}
int main()
{
    LinearSearch linearSearch;
    int size;

    std::cin >> size ;

    linearSearch.getArray(size);
    int key;
    std::cin >> key;

    LinearSearch(size,key);

    std::cout << linearSearch.search() << std::endl;

    std::cin.get();
    return 0;
}
