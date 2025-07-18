#include <bits/stdc++.h>
using namespace std;
int Binary_Search(int a[],int x,int l, int r){
    int mid = (r+l)/2;
    while (l < r){
        if (mid == x){
            return mid;
        }
        else if (mid < x){
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
        mid = (l+r)/2;
     }
    return -1;


}