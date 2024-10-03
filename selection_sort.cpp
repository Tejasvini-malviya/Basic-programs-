#include<iostream>
using namespace std;
void selectionsort(int arr[],int size){
    for(int i=0;i<size;i++){
        int minIndex=i;
        for(int j=i+1;j<size;j++){
        if(arr[i]<arr[minIndex]){
            minIndex=j;
        }
    }
    swap(arr[i],arr[minIndex]);
}
}


void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int arr[5] = {10,21,18,19,12};
    selectionsort(arr,5);
    printArray(arr,5);
    return 1;
}