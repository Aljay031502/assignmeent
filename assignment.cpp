#include<iostream>
using namespace std;
int main()
{
        int x;
        int sum;
        int average;
        int product;
        int smallest, largest;
        int i;

        for( i=1;i<=3;i++)
        {
            cout<<"please enter the integer number"<<endl;
            cin>> x;
            sum = sum+x;
            product =product;
            if(i==1)
                smallest = x;
            if(x < smallest)
                smallest=x;
            else
            largest = x;
        }


        cout<<"the sum is:"<<sum<<endl;
        cout<<"the average is:"<<sum/3<<endl;
        cout<<"the product is:"<<product<<endl;
        cout<<"the smallest is:"<<smallest<<endl;
        cout<<"the largest is:"<<largest<<endl;

        return 0;
}