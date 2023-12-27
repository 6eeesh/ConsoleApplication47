#include <iostream> 
using namespace std;

class Sort
{
public:

    static void BubbleSort(int ar[], int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (ar[j] > ar[j + 1]) {

                    int temp = ar[j];
                    ar[j] = ar[j + 1];
                    ar[j + 1] = temp;
                }
            }
        }
        cout << endl;
    }


    static void SelectSort(int ar[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int min_index = i;
            for (int j = i + 1; j < n; j++) {
                if (ar[j] < ar[min_index]) {
                    min_index = j;
                }
            }

            int temp = ar[min_index];
            ar[min_index] = ar[i];
            ar[i] = temp;
        }
        cout << endl;
    }

};

int main()
{
    int ar[] = { 1,6,2,7,3,8,4,9,5,10 };
    int n = sizeof(ar) / sizeof(ar[0]);

    cout << "Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }

    Sort::BubbleSort(ar, n);
    cout << "Bubble sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }

    Sort::SelectSort(ar, n);
    cout << "Select sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }

}