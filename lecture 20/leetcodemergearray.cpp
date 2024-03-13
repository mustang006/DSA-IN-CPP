#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m) {

    int i = 0, j = 0;
    
    while( i<n && j<m) {
        if(arr1[i] < arr2[j]){
            arr1[i++];
        }
        else{
            arr1[i++] = arr2[j++];
        }
    }

    //copy first array k element ko
   

    //copy kardo second array k remaining element ko
    while(j<m) {
        arr1[i++] = arr2[j++];
    }
}

void print(int ans[], int n) {
    for(int i=0; i<n; i++) {
        cout<< ans[i] <<",    ";
    }
    cout << endl;
}

int main() {

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};

   

    merge(arr1, 5, arr2, 3);

    print(arr1, 8);


    return 0;
}