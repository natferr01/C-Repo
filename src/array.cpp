//*************************************************
//          Natalie Ferraro
//          array
//          02-01-2022 
//  inserts integers into an array, 
//  deletes integers from the array, and 
//  displays the content of the array to the user.
//*************************************************

#include <iostream>
using namespace std;

//method to insert numbers in an array
void array(){

    int size = 0; //array size set to 0
    cout << "Enter size of the array." << endl;
    cin >> size; //array size set to size input by user

    int* arr = new int[size]; //creates new int* array of size input by user

    cout << "Enter" << ' ' << size << ' ' <<  "intergers in ascending order." << endl;
    //reads in and fills array arr with integers input by the user
    for(int index = 0; index < size; index++){
        cin >> arr[index];
    }

    cout << "The elements of the array in ascending order are:" << endl;
    //prints the elements of the array in ascending order
    for(int index = 0; index < size; index++){
        cout << arr[index] << ' ' ;
    }
    //carriage return
    cout << "\n" ;

    int num, pos;
    cout << "Enter an integer you would like to insert into the array." << endl;
    cin >> num;

    //expands the array index to hold one more element and sorts the elements of the array to include the new element
    for(int index = 0; index < size; ++index){
        if(arr[index] <= num && num < arr[index + 1]){
            pos = index + 1;
        }
    }
    for(int index = size + 1; index > pos; --index){
        arr[index] = arr[index - 1];
        arr[pos] = num;
    }

    //prints the new elements of the array
    cout << "Elements of the array after integer" << ' ' << num << ' ' << "has been inserted:" << endl;
    for(int index = 0; index < size + 1; index++){
        cout << arr[index] << ' ' ;
    }

    int numRemove;
    cout << "\n" << "Choose an element of the array to remove." << endl;
    cin >> numRemove;

    //searches array for numRemove element
    for (int index = 0; index < size; index++){
        if (arr[index] == numRemove){
            if (index < numRemove){
                size = size - 1;
            }
        }
    }
    //sorts elements after deletion
    for (int index = 0; index < size; index++){
        arr[index] = arr[index + 1];
    }

    // prints new elements of the array
    cout << "Elements of the array after integer" << ' ' << numRemove << ' ' << "has been removed:" << endl;
    for (int index = 0; index < size; index++){
        cout << arr[index] << " ";
    }
}

int main(){

    array();
    
    return 0;
}