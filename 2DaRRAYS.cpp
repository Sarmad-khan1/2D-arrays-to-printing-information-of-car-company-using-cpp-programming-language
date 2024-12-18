#include <iostream>
int getCarsbyColor(int cidx);
using namespace std;
int cars[5][5] = {{10, 7, 12, 10, 4},
 {18, 11, 15, 17, 2},
 {23, 19, 12, 16, 14},
 {7, 12, 16, 0, 2},
 {3, 5, 6, 2, 1}};
main()
{
 int total;
 total = getCarsbyColor(0);
 cout << total;
}
int getCarsbyColor(int cidx)
 {
int total = 0;
for (int i = 0 ; i <=5; i++)
 {
 total = total + cars [i][cidx];
 }
 return total;
}