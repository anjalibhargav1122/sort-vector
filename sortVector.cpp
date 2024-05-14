
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    
    vector<int>values;
    
    int num;
    for(int i =0; i<n; i++){
          cout<<"Enter value "<<i+ 1<<": ";
          cin>>num;
          values.push_back(num);
    }
    sort(values.begin(), values.end());
    for(int i = 0; i<n; i++){
        cout<<values[i]<<endl;
    }
}
