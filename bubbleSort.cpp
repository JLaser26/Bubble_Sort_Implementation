#include <iostream>

using namespace std;

void sort(int arr[], int size){

    int temp;
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
    }

}

int main()
{
    // int array[] = {2,5,8,4,1,9,3,7,10,6};
    // int size = sizeof(array)/sizeof(array[0]);

    // sort(array, size);

    // for(int element: array){
    //     cout << element << " "; 
    // }
    return 0;
}
