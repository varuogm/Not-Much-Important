# BinarySearch

[https://leetcode.com/discuss/general-discussion/786126/python-powerful-ultimate-binary-search-template-solved-many-problems](https://leetcode.com/discuss/general-discussion/786126/python-powerful-ultimate-binary-search-template-solved-many-problems)

**Binary search** 

Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. *initution* is to divide vector in right and left half according to key.

```cpp
int binsearch(vector<int> arr ,int k ){

int start =0;
int end =arr.size()-1;

while(start<=end){

    int mid = (start+end)/2;

    if(arr[mid]==k)
        return mid;

    else if(arr[mid]>k)  //searched number K  chota he curr mid se
     end = mid-1; 
    
    else
     start = mid+1;
    
 }
 return -1;
}
```

BS in reverse array

```cpp
int reverseBinsearch(vector<int> arr ,int k ){

int start =0;
int end =arr.size()-1;

while(start<=end){

    int mid = (start+end)/2;

    if(arr[mid]==k)
        return mid;

    else if(arr[mid]>k) //searched number K  chota he curr mid  se
     start = mid+1; 
    
    else
     end = mid-1;
    
 }
 return -1;
}
```

**First** occurrence of an element in  sorted array

```cpp
int binsearch(vector<int> arr ,int k ){

int start =0;
int end =arr.size()-1;
int res =-1;
while(start<=end){

    int mid = (start+end)/2;

    if(arr[mid]==k)
      {
        res= mid;//isko rakh lete he  but left side vapis dekhne chalenge kahi aur chota 
                     //mil jaye to
        end= mid-1;
      }

    else if(arr[mid]>k) 
     end = mid-1; 
    
    else
     start = mid+1;
    
 }
 return res;
}
```

**Last** occurance of an element in sorted array

```cpp
int binsearch(vector<int> arr ,int k ){

int start =0;
int end =arr.size()-1;
int res =-1;
while(start<=end){

    int mid = (start+end)/2;

    if(arr[mid]==k)
      {
        res= mid;//isko rakh lete he  but right side vapis dekhne chalenge kahi aur bada  
                     //mil jaye to
        start= mid+1;
      }

    else if(arr[mid]>k) 
     end = mid-1; 
    
    else
     start = mid+1;
    
 }
 return res;
}
```

Number of times array is rotated

```cpp
int NumberOfTimesArrayRotated(vector<int> arr) {

    int start = 0;
    int end = arr.size()- 1;

    while(start <= end) {

        if(arr[start] < arr[end] || arr.size() == 1) { 
            return start;
        }
   // the number from where its roated has unique proptery that both its left and right are bigger than it,
        int mid = start + (end - start) / 2;
        int prevIndex = (mid - 1 + arr.size()) % arr.size();

        if(arr[mid] < arr[prevIndex]) {
            return mid;
        } else {
            if(arr[mid] < arr[start]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
    }

    return -1;
}
```

Nearly sorted array ()

```cpp
int search_element_nearly_sorted(vector<int> arr, int key){

    //in normal BS we find the elemtn in mid but now it could be mid-1,mid,mid+1 
    //but also check ehrther mid-1 and +1 dont go out of bounds (>start but <end)
    // if the key is not present sideways that means mid-2 and mid+2 may have it so edit start and end pointer accrodingly.
    
    int start = 0;
    int end = arr.size()-1;

    while(start <= end){
       int mid = start + (end-start)/2;

        if(key==arr[mid]) 
            return mid;
        else if(mid-1 >= start && arr[mid-1]==key)
            return mid-1;
        else if(mid+1 <= end && arr[mid+1]==key) 
            return mid+1;

        else if(key <= arr[mid]) 
            end = mid-2;
        else 
            start = mid+2;
    }
    return -1;
}
```

FLoor of a number  

example - {-3, 2, 10, 39, 45} floor of 12 is 10 and floor of 40 is 39

```cpp
int floor_of_number(vector<int> arr, int key)
{
    //floor would always be lesser so try to find in left side of the portion
    int res;
   int start = 0;
   int end = arr.size()-1;
  while(start <= end){
    
        int mid = start + (end- start) / 2;
        if (arr[mid] == key)
            return arr[mid];
    
        else if (arr[mid] > key) //its in right but search in left
        {
           end = mid-1;
        }
        else if(arr[mid]<key) // in left only but will check for other more good floor number
        {
            start = mid+1;
            res = arr[mid];
        }
}
```

**Ceil of a number** 

example - {-3, 2, 10, 39, 45} ceilf 12 is 39 and ciel of 8 is 10

```cpp
int ciel_of_number(vector<int> arr, int key)
{
    //floor would always be lesser so try to find in left side of the portion
    int res;
   int start = 0;
   int end = arr.size()-1;
  while(start <= end){
    
        int mid = start + (end- start) / 2;
        if (arr[mid] == key)
            return arr[mid];
    
        else if (arr[mid] > key) 
        {
            res = arr[mid]; // in the right only but we will check for more ciel if possible 
           end = mid-1;
        }
        else if(arr[mid]<key) 
        {
            start = mid+1; 
        // in the left but wanted to search in right side only
            
        }
}
```

**Next alphabet element** 

(given a string “abdjl”  for target c the next element is d and for k is l)

```cpp
char next_alphabet(string arr,char target)
{
    int start=0,end = arr.size()-1;
    char res ='#';

    while(start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid]==target)
            start = mid+1;

        else if(arr[mid]>target)
        {
            res = arr[mid];
            end = mid-1;
        }

        else if(arr[mid]<target)
            start = mid+1;
    }
    return res;
}
```

**minimum Difference Element**

```cpp
int minimumDifferenceElementSortedArray(vector<int> arr, int key) {

//same key hi hotot absolute sabse minum hoga else aaju baaju wale... 
//and for aaju baaju poora BS chala do at the end end and start ek
// dusre ko cross karke un aaju baaju pehi pohcuh jayegi then unme se jobi 
//   abs hoga vo print

int start = 0, end = arr.size()-1;

int minDifference; while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return 0;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (abs(arr[start] - key) > abs(arr[end] - key)) {
        minDifference = abs(arr[end] - key);
    } else {
        minDifference = abs(arr[start] - key);
    }

    return minDifference;

}

```

**Search a key in sorted array**

![Untitled](BinarySearch%20256dc563baca49299b125b7fd13b671d/Untitled.png)

```cpp
pair<int,int> search_in_sorted_array(vector<vector<int>>arr ,int key)
{
    int i = 0;
    int j = arr.size()-1;

    while (i >=0 && i <arr.size() && j>=0 && j < arr.size())
    {
        if(arr[i][j] == key)
            return {i,j};

        else if(arr[i][j] > key)
            j--;

        else if(arr[i][j] < key)
            i++;
    }
    
 return {-1,-1};

}

int  main(){
vector<vector<int>> arr= {{10, 20, 30, 40},
                         {15, 25, 35, 45},
                         {27, 29, 37, 48},
                         {32, 33, 39, 50}};
int  number_to_be_searched;
cout<<"enter number to be searched\n";
cin >> number_to_be_searched;

cout<<"value entered is -> "<<number_to_be_searched<<endl;
pair<int,int> x= search_in_sorted_array(arr,number_to_be_searched);

cout<<"value find in index -"<<x.first <<","<< x.second<<endl;

}
```

// allocate minimum pages to students

```cpp
#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> arr,int numOfStudents, int max){

  int currentFitStudents = 1;
  int sum = 0;

  for (int i = 0; i < arr.size(); ++i)
  {
    // we are making boxes like for max number = 50
    // {10,20}
    // {30}
    // {40}

    sum = arr[i] +sum;
    if (sum > max) //if adding next elemtts exceeds the max number
    // then we will def needing more students so 
    {
      currentFitStudents++;
      sum = arr[i];
    }
  }

  if (currentFitStudents > numOfStudents)
    return false;
  else
    return true;
}

int binarySearch(vector<int> arr, int numOfStudents){
  int result = -1;

  // if books is less than students
  if(arr.size() < numOfStudents){
    return -1;
  }

  int sum=0;
  for (int i = 0; i < arr.size(); ++i)
    sum = sum+arr[i];

  //set l as max in arr
  int start = *max_element(arr.begin(), arr.end());
  int end = sum;
  int res = -1;

  while(start <= end){
    int mid = start + ((end-start)/2);

  // will go from left to right and pick anumber and check if it persist 
  // valid scheme exist if yes then storing 
    if(isValid(arr,numOfStudents,mid) == true){
      // if true then set result as mid and check if there exists a lower value(pages)
      result = mid;
      end = mid-1; 
    }

    else {
      start = mid+1;
    }
  }
  return result;
}

int main(){

    vector<int> arr {10,20,30,40};
    int noOfStudents = 2;

   cout<<"Minimum pages each student has to read:"<<binarySearch(arr,noOfStudents);

  return 0;
}
```