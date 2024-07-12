#include<iostream>
using namespace std;

void swap(int *x, int *y) //a,b are diifrent
{
    int c;  //x and y are the pointer to a,b--<they store the address of a nd b
    c = *x;
    *x= *y;
    *y = c;

    cout<<"the swaping is complete"<<endl;
}
int main()
{
    int a,b;

    a=3;
    b=4;
    /*int c
    c = a;
    a = b;
    b = c */

    swap(&a,&b);  //passing the address
    cout<<"The values of a nd b after the swap are :"<<a<<" "<<b;

    return 0;


}