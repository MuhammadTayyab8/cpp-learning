#include<iostream>
using namespace std;

void show(int x[], int y) {
    for(int i=0; i<y; i++){
        cout << x[i] << " ";
    }
}

main()
{
    // char array
    char arr1[100] = "imran"; // 5 char
    char arr2[] = "Hello World"; // 11 char and 12 char allocated to memory char+1;

    // array comparison
    int arr3[3], arr4[3];
    
    cout << "============== Array Formation ==============" << endl;
    cout << "Enter 3 int for arr3: ";
    for(int i=0; i<3; i++) {
        cin >> arr3[i];
    }

    cout << "Enter 3 int for arr4: ";
    for(int i=0; i<3; i++) {
        cin >> arr4[i];
    }

    cout << "============== Array Comparison ==============" << endl;

    int equal = 0;
    for(int i=0; i<3; i++) {
        if(arr3[i] != arr4[i]) {
            equal = 1;
            break;
        }
    }

    if (equal == 0) {
        cout << "arr3 and arr4 are equal" << endl;
    } else {
        cout << "arr3 and arr4 are not equal" << endl;
    }

    cout << "============== Array Display ==============" << endl;
    cout << endl << "***** arr3: ";
    for(int i=0; i<3; i++) {
        cout << "\t" << arr3[i];
    }

    cout << endl << "***** arr4: ";
    for(int i=0; i<3; i++) {
        cout << "\t" << arr4[i];
    }




    // ========== function array ===========
    cout << endl << "============= Function Array ===============" << endl;
    int num1[5] = {1, 2, 3, 4, 5};
    show(num1, 3);


    // ========== Multidimensional array ===========
    cout << endl << "============= Multidimensional Array ===============" << endl;
    int multi_arr1[2][3] = {   // 2 rows/ 3 column
        {10, 20, 30},
        {20, 30, 40}
    }; 

    cout << multi_arr1[0][0] << endl; // 10

    for(int i =0; i<2; i++){  // row
        for(int j=0; j<3; j++){
            cout << multi_arr1[i][j] << " ";
        }
        cout << endl;
    }


}