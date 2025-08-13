#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[5] = {1};
    for(i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}
// output of the code is 10000
/*reason -> other 4 element in array fill with garbage value 
which is 0 by default 
*/