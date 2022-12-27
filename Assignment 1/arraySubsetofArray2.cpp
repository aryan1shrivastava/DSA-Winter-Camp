#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &); string rtrim(const string &);
vector<string> split(const string &);


vector<int> compareTriplets(vector<int> a, vector<int> b) {
int aCount=0,bCount=0; for(int i=0;i<3;i++){ if(a[i]<b[i]){
bCount++;
}
else if(a[i]>b[i]){ aCount++;
}
}
vector<int> ans; ans.push_back(aCount); ans.push_back(bCount); return ans;
}

int main()
{
ofstream fout(getenv("OUTPUT_PATH"));

string a_temp_temp; getline(cin, a_temp_temp);

vector<string> a_temp = split(rtrim(a_temp_temp));

vector<int> a(3);

for (int i = 0; i < 3; i++) {
int a_item = stoi(a_temp[i]);

a[i] = a_item;

}

string b_temp_temp; getline(cin, b_temp_temp);

vector<string> b_temp = split(rtrim(b_temp_temp));

vector<int> b(3);

for (int i = 0; i < 3; i++) {
int b_item = stoi(b_temp[i]);

b[i] = b_item;
}

vector<int> result = compareTriplets(a, b);

for (size_t i = 0; i < result.size(); i++) { fout << result[i];

if (i != result.size() - 1) { fout << " ";
}
}

fout << "\n";

fout.close();

return 0;
}

//string ltrim(const string &str) { string s(str);