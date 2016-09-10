#include <iostream>
#include <cmath>
using namespace std;
void  heapify(int *arr, int num_tree, int num_sort){
    int largest = num_sort;
    int left = 2*num_sort + 1;
    int right = 2*num_sort + 2;

    if (left < num_tree && arr[left] > arr[largest])
        largest = left;
    if (right < num_tree && arr[right] > arr[largest])
        largest = right;
    if (largest != num_sort){
        swap(arr[largest], arr[num_sort]);
        heapify( arr, num_tree, largest);
    }
}
void heap_sort(int *arr, int num_tree){
    for (int i = num_tree-1; i>= 0; i--)
        heapify(arr, num_tree, i);
    for (int i = num_tree-1; i>= 0;i--){
        swap(arr[0], arr[i]);
        heapify(arr,i,0);
    }

}
void printarray(int *arr, int num_tree){
    for (int i=0;i<num_tree; i++)
        cout<<arr[i]<<endl;
}
int main()
{   int a[100] = {1,10,50,7,5,9,2,100,2,8,13123,42342,42342,4234234,4234,2,43434,535352,3423,4,24,234,24,234,234,23,4,24,23,423,4,234,234,23,4,234,234,23,4,234,234,234,32,4,234,234,23,55,658,678,7,45,645,645,65,8,656,46,658,55,46,5,64,7,457,45,346,47,3,443,6,45,6,45,754,65,424,75,6,6,45,435353};
    int num_tree = sizeof(a)/sizeof(a[0]);
    heap_sort(a,num_tree);
    printarray(a,num_tree);
    return 0;
}
