#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display( int *arr ,int size){
    int i;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

 void bubbleSort(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j= i+1;j<size;j++){

        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }

        }
    }
 }



int main(){

int n;
cout<<"Enter the size of array : ";
cin>>n;
int arr[n];
cout<<"Enter the elements";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"before sorting : ";
display(arr,n);
bubbleSort(arr,n);
cout<<"After sorting : ";
display(arr,n);

}