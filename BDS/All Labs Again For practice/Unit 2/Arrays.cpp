#include <iostream>
using namespace std;

void arrayOperations()
{
    // Insertion operation in an arrays
    cout << "SIze of array: ";
    int len;
    cin >> len;
    int arr[len + 100];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    // Inserting in end
    cout << "Enter ELement To insert";
    int ele;
    cin >> ele;
    arr[len] = ele;
    len++;

    // Printing the array
    cout << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Inserting in middle
    cout << "Enter ELement To insert";
    cin >> ele;
    int pos;
    cout << "Enter position to insert";
    cin >> pos;
    for (int i = len - 1; i > pos; i--)
    {
        arr[i + 1] = arr[i]; // shifting elements to right to make space for new element
    }
    arr[pos] = ele;
    len++;

    // Printing the array
    cout << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Inserting in the beginning
    cout << "Enter ELement To insert";
    cin >> ele;
    for (int i = 0; i < len; i++)
    {
        arr[i + 1] = arr[i]; // shifting elements to right to make space for new element
    }
    arr[0] = ele;
    len++;

    // Printing the array
    cout << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deleting an element from the array
    cout << "Enter element to delete: ";
    cin >> ele;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == ele)
        {
            for (int j = i; j < len; j++) // fron ith position to last position, it is shifted to left cos we are deleting the element.
            {
                arr[j] = arr[j + 1];
            }
            len--; // This is to ignore the last element which is a duplicate of the second last element
            break;
        }
    }

    // Printing the array
    cout << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deletion from particular position in array

    cout << "Enter position to delete(not the index value): ";
    cin >> pos;
    for (int i = pos - 1; i < len; i++)
    {
        arr[i] = arr[i + 1];
    }
    len--;

    // Printing the array
    cout << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void twodarray()
{
    // 2D array
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;
    int arr[row][col];
    cout << "Enter elements: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Elements are: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}
void matrixmultiplication()
{
    int row1, col1, row2, col2;
    cout << "Enter number of rows of first matrix: ";
    cin >> row1;
    cout << "Enter number of columns of first matrix: ";
    cin >> col1;
    cout << "Enter number of rows of second matrix: ";
    cin >> row2;
    cout << "Enter number of columns of second matrix: ";
    cin >> col2;
    if (col1 != row2)
    {
        cout << "Matrix multiplication not possible";
        return;
    }
    int arr1[row1][col1], arr2[row2][col2], arr3[row1][col2];
    cout << "Enter elements of first matrix: ";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; ++j)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements of second matrix: ";
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; ++j)
        {
            cin >> arr2[i][j];
        }
    }
    // Multiplication
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; ++j)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "Elements of resultant matrix: ";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; ++j)
        {
            cout << arr3[i][j] << " ";
        }
    }
    cout << endl;
}

void passing(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    // arrayOperations();
    // twodarray();
    // matrixmultiplication();
    int arr[10];
    passing(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}