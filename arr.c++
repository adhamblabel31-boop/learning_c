#include <string>
#include <iostream>
using namespace std;
int main()
{
    cout << "adham\n";
    int dna[5];
    dna[0] = 4;
    dna[1] = 5;
    dna[2] = 6;
    dna[3] = 5;
    dna[4] = 3;

    cout << dna[0] << endl;
    cout << dna[1] << endl;
    cout << dna[2] << endl;
    cout << dna[3] << endl;
    cout << dna[4] << endl;

    char dnb[5] = {'5', '6', '5', '6', '4'};

    /*  cout<<dnb[0]<<endl;
      cout<<dnb[1]<<endl;
      cout<<dnb[2]<<endl;
      cout<<dnb[3]<<endl;
      cout<<dnb[4]<<endl;*/

    /*for(int j=0 ; j<5 ; j++)
     {
         cout<<dnb[j]<<endl;
     }
     ///////////////////////////////
     int dnd[5];
     for(int m=0 ; m<5 ; m++)
     {
         cin>>dnd[m];
     }

     for(int k=0;k<5;k++)
     {
         cout<<dnd[k]<<endl;
     }*/

    int q;
    cin >> q;

    int dne[q];

    for (int x = 0; x < q; x++)
    {
        cin >> dne[x];
    }

    for (int z = 0; z < q; z++)
    {
        cout << dne[z] << endl;
    }

    return 0;
}