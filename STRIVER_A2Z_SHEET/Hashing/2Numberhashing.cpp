    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        int arr[] = {1,2,3,1,2,4};
        int n = sizeof(arr)/sizeof(arr[0]);

        int hash[13] = {0};

        for(int i : arr){
            hash[i]++;
        }

        for (int i = 0; i < 13; i++) {
             if (hash[i] > 0) {
                 cout << i << " = " << hash[i] << endl;
                }
        }   

        return 0;
    }