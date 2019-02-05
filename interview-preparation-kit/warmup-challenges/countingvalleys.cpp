//Find out when the guy is Back to the Sea Level ;


#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int valleys=0;
    int step=0;
    cout << step <<endl;
    for (int i=0;i<n;i++) {
        if(s[i] == 'U') {
            step++;
        }
        else
        if(s[i] == 'D') {
            step--;
        }
        if(step == 0 && s[i] == 'U') {
                valleys++;
        }
        cout<<step<<endl;
    }
    return valleys;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
