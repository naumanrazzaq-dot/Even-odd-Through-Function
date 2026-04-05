#include <iostream>

using namespace std;

int evenodd(int a){
    if(a%2==0){
        cout<<"even";
    }

    else
        cout<<"odd";


}

    int main(){
        int a;
        cout<<"enter number:";
        cin>> a;

        evenodd(a);

return 0;
}
