#include <iostream>
using namespace std;

void find_maximum(int matrix[][100], int a, int b) {
    for (int i = 0; i < a; i++) {
        int max = 0;
        for (int j = 0; j < b; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        cout <<"Maximum of row "<<i<<" is " <<max << endl;
    }
}

int main(){
//  for_fun
    // int a,b;
    // cout << "enter the number of columns and rows numbers" << endl;
    // cin >> a >> b;
    // int main[a][b];
    // for (int i = 0; i < a; i++){
    //   for (int j = 0; j < b; j++){
    //         main[i][j] = i;
    //       cout << main[i][j] << " ";
    //   }
    //     cout << endl;
    // }

    // problem1
    // int n, m;
    // int sum = 0;
    // cout << "Input N and M numbers: ";
    // cin >> n >> m;
    // int new_arr[n][m];
    // for (int i=0; i < n; i++) {
    //     for (int j=0; j< m; j++) {
    //         new_arr[i][j] = i + j;
    //         sum += new_arr[i][j];
    //         cout << new_arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "Sum is: "<<sum << endl;

    // problem2
    // int n,m;
    // cout << "Enter N and M: ";
    // cin >> n >> m;
    // int new_arr2[100][100];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j< m; j++) {
    //         new_arr2[i][j] = i * j;
    //     }
    // }
    // find_maximum(new_arr2, n, m);

    // problem3

}