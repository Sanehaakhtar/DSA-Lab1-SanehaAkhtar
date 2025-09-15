#include <iostream>
#include <vector>
using namespace std;
// a function to search for the key in an array and
// returnig all the indicies where it is present
vector<int> findAllIndices(vector<int> &arr, int key)
{
    vector<int> indices; // variable to store indices

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        { // if we found the key , pushing it in vector
            indices.push_back(i);
        }
    }
    return indices; // returning the vector containing all the indices
}
int main()
{
    // taking input of vector and its elements from user
    int size;
    vector<int> arr;
    cout << "Enter size of a vector: ";
    cin >> size;
    cout << "Enter elements of the vector: ";
    // invalid size case so array wont be empty
    if (size <= 0)
    {
        cout << "Invalid Size" << endl;
    }
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;         // taking the elements from the user
        arr.push_back(x); // adding each element the user gives in the vector
    }
    // taking input of key to be searched
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    // displaying vector now
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    // calling the function to find all indices of the key
    vector<int> result = findAllIndices(arr, key);
    if (result.empty())
    {
        cout << "Key not found" << endl;
    }
    else
    {
        for (int index : result)
        {
            cout << key << " is at index :" << index << " ";
            cout << endl;
        }
    }
    return 0;
}
