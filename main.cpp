#include <iostream>
#include "SparseArray.h"
#include "Z3.h"

void foo(const SparseArray<int,3>& a){
    for( SparseArray<int,3>::const_iterator r = a.begin();r!=a.end();r++)
    {cout << r.key() << " : " << r.value() << endl;}

    cout << a.size() << endl;

    SparseArray<int,3>::Index i;
    i = 1,2,3;

    cout<<"======"<<endl;
    SparseArray<int,3>::const_reference r = a[i];
    int number = r;
    cout<<number<<endl;
    a.realShow();

}
int main() {
    SparseArray<int,3> arr;
    SparseArray<int,3>::Index i;
    SparseArray<int,3>::Index j;
    SparseArray<int,3>::Index k;
    SparseArray<int,3>::Index a;
    SparseArray<int,3>::Index b;
    SparseArray<int,3>::Index c;
    i = 1,2,1;
    j = 0,5,7;
    k = 3,4,1;
    a = 4,0,0;
    b = 5,1,1;
    c = 6,0,0;
    arr[i] = 10;
    arr[j] = 6;
    arr[k] = 8;
    arr[a] = 9;
    arr[b] = 10;
    arr[c] = 11;
    arr[j] = int();
    arr[i] = int();
    arr[j] = int();
    arr[k] = int();
    arr[a] = int();
    arr[b] = int();
    arr[c] = int();
    arr[i] = 10;
    arr[j] = 6;
    arr[k] = 8;
    arr[a] = 9;
    arr[b] = 10;
    arr[c] = 11;

    foo(arr);



    return 0;
}

