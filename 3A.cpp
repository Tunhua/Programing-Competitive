#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    while(1){
        cin >> h >> w;
        if(h==0&&w==0) break;
        for(int j=0;j<h;j++){
            for(int k=0;k<w;k++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
