//Author: John Crosby
#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector< vector<int> > table;
    table.resize(12);
    for(int row = 0; row < 12; row++)
    {   
        table[row].resize(12);
    }
    for(int row = 0; row < table.size(); row++)
    {
        for(int column = 0; column < table.size(); column++)
        {
            table[row][column] = (column+1)*(row+1);
        }
    }
    for(int row = 0; row < 12; row++)
    {
       int x = 0;
       for(int column = 0; column < 12; column++)
       {
            x++;
            cout<<table[row][column]<<" | ";
       }
       cout<<endl;
      
    }
    
    








    return 0;
}
