#include <bits/stdc++.h>
using namespace std;


// Complexity time: O(log n)


int Binary_Search(int a[],int x,int l, int r){
    int mid = l + (r - l)/2;
    while (l <= r){
        if (a[mid] == x){
            return mid;
        }
        else if (a[mid] < x){
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
        mid = l + (r - l)/2;
     }
    return -1;


}
int main(){
    
}
