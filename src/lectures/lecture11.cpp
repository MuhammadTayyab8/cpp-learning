#include<iostream>
using namespace std;

main()
{
    // ==== array
    int arr[5] = {2,4,6,8,10};
    cout << arr[2] << endl;

    // ===== binary search
    int array[100];
    for(int i=0; i < 100; i++) {
        array[i] = i;
    }

    int input;
    cout << "Enter a number: ";
    cin >> input;

    int found = 0;
    int found_num = 0;
    for(int i=0; i<100; i++){
        if (array[i] == input){
        found = 1;
        found_num = array[i];
        break;
        }
    }

    if (found == 1){
        cout << "Found: " << found_num << endl;
    } else {
        cout << "Not Found" << endl;
    }


    // ===== rand
    cout << "Random number: " << rand() << endl;
    
    return 0;
}
