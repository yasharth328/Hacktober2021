#include<iostream>
#include<vector>
using namespace std;
template <typename myclass>

class Vectors{
private:
    myclass *arr;
    int ArrSize;
    int Length;
public:
    Vectors(int Size=4){
    ArrSize=Size;
    Length=0;
    arr=new myclass[ArrSize];
    }
    void Push(int n){
    if(Length==ArrSize){
        myclass *temp=arr;
        cout<<"Double Called "<<Length<<endl;
        arr=new myclass[ArrSize*2];
        for(int i=0;i<ArrSize;i++)
            arr[i]=temp[i];
        ArrSize*=2;
        delete [] temp;
        }
        arr[Length]=n;
        Length++;
    }

void Print(){
    for(int i=0;i<Length;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void pop(){
    Length--;
}
myclass &operator[](int n){
    return arr[n];
    }
};

int main(){
    Vectors<int> V;
    V.Push(1);
    V.Push(2);
    V.Push(3);
    V.Push(4);
    V.Push(5);
    V.Push(6);
    V.Print();
    cout<<V[2]<<endl;
    V[2]=100;
    cout<<V[2]<<endl;
    Vectors<char> Vch;
    Vch.Push('a');
    Vch.Push('b');
    Vch.Push('c');
    Vch.Push('d');
    Vch.Push('e');
}
