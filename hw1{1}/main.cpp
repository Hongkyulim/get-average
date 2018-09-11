#include <iostream>

using namespace std;

double getAverage(int arr[], int sizeOfArr);

int main(){
    
    int array[] = {10, 10, 10, 7, 8};
    size_t size = sizeof(array)/sizeof(array[0]);
    double total=0.0;
    double average;
    
    for(int i =0; i<size; i++){
        total = total+array[i];
    }
    
    average = total/size;
    cout<<"# of elements in array : "<<size<<endl;
    cout<<"Average of all elements in the array : "<<average<<endl;
    
    
    
    return 0;
}



