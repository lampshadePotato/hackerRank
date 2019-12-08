#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    ofstream fout(getenv("OUTPUT_PATH"));
    int sMax = 0;

    //Let's cycle through rows first and then columns
    for(int row = 0; row < arr.size()-2; row++){

        for(int column = 0; column < arr[row].size()-2; column++){
                int currSum = 0;

                int tLeft = arr[row][column];
                int tMid = arr[row][column+1];
                int tRight = arr[row][column+2];
                int midMid = arr[row+1][column+1];
                int bLeft = arr[row+2][column];
                int bMid = arr[row+2][column+1];
                int bRight = arr[row+2][column+2];

                currSum = tLeft + tMid + tRight + midMid + bLeft + bMid + bRight;






                if(sMax =< currSum ){

                    sMax = currSum;
                }



        }



    }



    return sMax;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
