//first give the number of elements you expecting to give
//then give the element one by one
//then you will get the median of each step
#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr, int n){
    bool flag;
    for(int a=n-1; a>0; a--) {
        flag = true;
        if (arr[a-1] > arr[a]) {
            int temp = arr[a-1];
            arr[a-1] = arr[a];
            arr[a] = temp;
            flag = false;
        }
        if (flag) return; 
    }
}

double findMedian(vector<int> arr, int n){
    int mid = n/2;
    if (n%2 == 0){
        return ((arr[mid-1]+arr[mid])/2.0);
    } else {
        return (arr[mid]);
    }
}

int main(){
    int n;
    int currNum;
    double median;
    vector<int> array;
    cout << "Enter number of element you are going to input - ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter a number - ";
        cin >> currNum;
        array.push_back(currNum);
        bubbleSort(array, i+1);
        median = findMedian(array, i+1);
        //this part is added to give a better output
        cout << "[" << array[0];
        for(int b=1; b<array.size(); b++){
            cout << ", " << array[b];
        }
        cout << "]      " << median << endl;
        
    }

    return 0;
}