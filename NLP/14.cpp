/*
Problem Name: Rain Water Harvesting
Problem Difficulty: None
Problem Constraints: 1 <= N <= 10^6
Problem Description:
Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save. 

Explanation for the Sample input Testcase:  
<img src="https://minio.cb.lk/img/ScHHWbX.jpg" alt="Elevation Map" height="150" width="300">  
 
So the total units of water she can save is 5 units
Input Format: First line contains an integer n. Second line contains n space separated integers representing the elevation map.
Sample Input: 10
0 2 1 3 0 1 2 1 2 1
Output Format: Print a single integer containing the maximum unit of waters she can save.
Sample Output: 5

Time Complexity -> N
*/

#include <iostream>
using namespace std;

int main(){
    int a[1000000],l[1000000],r[1000000],n;
    
    // l[] -> leftmost maximum Array , r[]-> Rightmost Maximum Array

    cout<<"Enter the total Number of buildings "<<endl;
    cin>>n;

    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    l[0] = a[0];
    r[n-1] = a[n-1];

    // Building leftmost Array
    for(int i =1 ; i<n;i++){
        l[i] = max(l[i-1],a[i]);
    }
    

    // Building Rightmost Array
    for(int i = n-2; i>=0;i--){
        r[i] = max(r[i+1],a[i]);
    }

    int water = 0,j;
    for(int i =0; i<n;i++){
        
        water += min(l[i],r[i])- a[i];
    }
     
    cout<<"Total water stored is "<<water <<" units"<<endl;

    return 0;
}
