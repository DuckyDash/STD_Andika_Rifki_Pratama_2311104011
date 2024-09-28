/**
#include <iostream>

using namespace std;

int main()
{
    cout << "Life is onion" << endl;
    return 0;
}
*/
/**
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float W, X, Y;
    float Z;
    X = 7; Y = 3; W = 1;
    Z = (X + Y)/(Y + W);
    cout <<"Nilai Z =" << Z << endl;
}
*/
/**
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double tot_pembelian, diskon;
    cout <<"total pembelian : Rp";
    cin >> tot_pembelian;
    diskon = 0;
    if(tot_pembelian >= 10000)
        diskon = 0.05*tot_pembelian;
    else
        diskon = 0;
    cout<<"Besar diskon = Rp" << diskon;
}
*/
/**
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int i=1;
    int jum;
    cin >> jum;
    do{
       cout << "Baris Ke-" << i + 1 << endl;
       i++;
    }while(i < jum);
    getchar();
    return 0;
}
*/

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

}
