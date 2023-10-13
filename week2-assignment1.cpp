#include <iostream>
using namespace std;


int A[1000000];


//二分探索
//xが検索する値
//sizeは配列の大きさ
int binary_search(int x,int size)
{
    int left_bound = 0;
    int right_bound = size-1;
    int count =0;
    while(left_bound<=right_bound)
    {
        int middle = (left_bound+right_bound)/2;

        if(x<A[middle])
        {
            right_bound = middle-1;
            count++;
        }

        if(x==A[middle])return count++;
        if(x>A[middle])
        {
            left_bound= middle +1;
            count++;
        }
    }
    
    return -1;
}



int main()
{
    //配列には、値が、3,5,7,9,,,と格納されます。
    for(int i=0;i<100;i++)
    {
        A[i]=i;
        cout<<i<<" ";
    }

    while(true)
    {
        cout<<"検索する値を入力してください: "<<endl;
        int input;cin>>input;
        int index = binary_search(input,100);
        if(index == -1 )
        {
            cout<<"not found."<<endl;
        }
        else
        {
            cout<<"Found"<<"(step="<<index<<")"<<endl;
        }

    }

    return 0;
}
