#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i<n; i++)
    {
        if (n%i==0)
        {
            cout<<"number is not prime for:"<<i<<endl;
        
                }
                else
                {
                    cout<<"number is prime:"<<i<<endl;
                }
                
        
    }
    
    
        
        
  
}