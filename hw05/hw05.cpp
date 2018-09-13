#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
using namespace std;

//Q1: The STL is the Standard Template Library. It provides containers, algorithms, and iterators.
// A vector is essentially a dynamic array that can resize itself. The storage is automatically handled by a container,
// it can then be accessed and traversed with iterators.

//Q2: The resize() operation changes the size of the vector after instantiation.

//Q3: An STL array container is a static array. It differs from normal arrays and the vector container in that it cannot be added to
//    after its creation. 

//Q4: Begin and end should be used before/after traversing the vector to re-place the iterator

//Q5:Reserve simply allocates memory, but does not actually change the size of the vector.

//Q6: the push_back() modifier would be used to add more to the end of a vector. For example, adding more winners to the 
//    end of the winners vector, or adding more cards to a deck


vector<int> lotto(int size, int selected);

int main()
{
    int size = 51;
    int selected = 6;
    vector<int> winners;
    winners = lotto(51,6);
    cout << "Size of lotto & Number of winners: " << endl;
    cout << size << " , " << selected << endl;
    cout << endl;
    cout << "Winning numbers: " << endl;
    for (int i = 0; i < selected; i++)
        cout << winners[i] << endl;
}

vector<int> lotto(int size, int selected)
{
    default_random_engine randomEngine(std::time(nullptr));
    vector<int> nums(size);
    vector<int> lotto(selected);
    for(int i = 1; i < size; i++)
        nums[i-1] = i;
    nums.begin();
    shuffle(nums.begin(),nums.end(),randomEngine);
    for (int i = 0; i < selected; i++)
        lotto[i]= nums[i];
    nums.resize(selected);
    return lotto;

}