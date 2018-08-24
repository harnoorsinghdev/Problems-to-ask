https://practice.geeksforgeeks.org/problems/even-and-odd-elements-at-even-and-odd-positions/0

#include <iostream>
 using namespace std;

int main() {
    int t, n, a[8000], i, j, x, ele, b;
    cin >> t;
    for (x = 0; x < t; x++)
    {
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            b = i % 2;
            if (b == a[i] % 2) continue;
            j = i+1;
            for ( ;j < n; j++)
            {
                if (a[j] % 2 == b) break;
            }
            if (j == n) break;
            ele = a[j];
            for ( ;j > i; j--)
            {
                a[j] = a[j-1];
            }
            a[j] = ele;
            i++;
        }
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
	//code
	return 0;
}
