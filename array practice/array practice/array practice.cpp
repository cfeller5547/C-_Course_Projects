

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;




void printarray(int arr[], int count) {
    cout << "Array: " << "{ ";
    for (int x = 0; x < count; x++) {
        cout  << arr[x] << " ";  // how do i print on one line with {} Ex: Array: {5 8 8 9 2}
    }
    cout << "}";
    cout << endl;
}

double mean(int arr[], int count) {
    double total = 0;
    for (int x = 0; x < count; x++) {
        total = total + arr[x];
    }
    return (total / count);
}
/// <summary>
/// 
/// </summary>
/// <param name="arr"></param>
/// <param name="count"></param>
/// <returns></returns>

double standardeviation(int arr[], int count) {
    double goose = mean(arr, count);
    double sub, sum;
    sum = 0;
    double result;
    for (int x = 0; x < count; x++) {
        sub = arr[x] - goose;
        sum = sum + pow(sub, 2);
    }
    result = sum / count;
    return sqrt(result);

}

//double variance(int arr[], int count) {
//    double sum = 0;
//    for (int x = 0; x < count; x++) {
//        sum += pow(arr[x] - mean(arr, count), 2);
//    }
//    return sum / count;
//}
//
//double standardeviation1(int arr[], int count) {
//    return sqrt(variance(arr, count));
//}



double median(int arr[], int count) {
    std::sort(arr, arr + count);
        if (count % 2 == 0) {
            int index = (count / 2);
            int val_median = (arr[index] + arr[index - 1]) / (2); //minus 1 here because arrays start at 0
            return val_median;
        }
        else {
            int index = (count / 2);
            int val_median= arr[index];
            return val_median; // when not using void always need to return a value, this gets sent to main
        }   
}


double variance(int arr[], int count) {
    double goose = mean(arr, count);
    double sub, sum;
    sum = 0;
    double result;
    for (int x = 0; x < count; x++) {
        sub = arr[x] - goose;
        sum = sum + pow(sub, 2);
    }
    result = sum / count;
    return result;

}


int main()
{
    int myArray[100];
    int count;

    cout << "input how many numbers you want to be included: " << endl;
    cin >> count;
    for (int x = 0; x < count; x++) {
        cout << "number: ";
        cin >> myArray[x];
    }
    printarray(myArray, count);
    double goose = mean(myArray, count); // the reason i create cow and goose is because when you 
    cout << "the mean is: " << goose << endl;//use a return statement you have to create an int that = the calling function
    double cow = median(myArray, count);
    cout << "the median is: " << cow <<  endl;
    double chicken = standardeviation(myArray, count);
    cout << "the standard deviation is: " << chicken << endl;
    double duck = variance(myArray, count);
    cout << "the variance is: " << duck << endl;
    


}
    












//int b[] = { 11,45,62,70,88 };
    //cout << b[4] << endl;
    /*int myArr[5];*/

    //for (int x = 0; x < 5; x++) {
    //    myArr[x] = 42;

    //    cout << x << ": " << myArr[x] << endl;
    //}
    //int arr[4];
    //for (int x = 0; x < 3; x++) {
    //    cout << arr[x] << endl;       
    //}
    //int arr[] = { 11, 35, 62, 555, 989 };
    //int sum = 0;

    //for (int y = 0; y < 4; y++) {
    //    sum = sum + arr[y];
/*cout << sum << endl;*/
   


int myarr[20];
cin 