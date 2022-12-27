#include <bits/stdc++.h>
using namespace std;

void Common(vector<int> &v1, vector<int> &v2, vector<int> &v3, int n1,
                int n2, int n3)
{

    int i =0, j =0, k =0;

    while (i < n1 && j < n2 && k < n3) {

        if (v1[i] == v2[j] && v2[j] == v3[k]) {
            cout << v1[i] << " ";
            i++;
            j++;
            k++;
        }

        else if (v1[i] < v2[j])
            i++;
        else if (v2[j] < v3[k])
            j++;
        else
            k++;
    }
}

int main()
{
    vector<int> v1 = {1, 4, 7, 9, 12, 26};
    vector<int> v2 = {5, 12, 26, 30, 32, 49};
    vector<int> v3 = {9, 11, 12, 23, 26, 33};

    int n1 = v1.size();
    int n2 = v2.size();
    int n3 = v3.size();

    Common(v1, v2, v3, n1, n2, n3);
    
    return 0;
}

