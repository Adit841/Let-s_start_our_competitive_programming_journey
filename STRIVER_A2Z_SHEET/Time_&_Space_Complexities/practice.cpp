/*
    Practice them for understanding the time and space complexity 
    Q1
    for(int i = 0; i < n; i++){
        cout << i << endl;
    }
    Q2
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << i + j << endl;
        }
    }
    Q3
    for(int i = 0; i < n; i++){
        cout << i << endl;
    }


    for(int j = 0; j < n; j++){
        cout << j << endl;
    }
    Q4
    int i = 1;


    while(i < n){
        cout << i << endl;
        i *= 2;
    }
    Q5
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << i + j << endl;
        }
    }
    Q6
    int x = n;


    while(x > 1){
        x = x / 2;
    }
    Q7
    vector<int> arr(n);


    for(int i = 0; i < n; i++){
        arr[i] = i;
    }
    Q8 — slightly tricky
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << i << j;
        }


        for(int k = 0; k < n; k++){
            cout << k;
        }




        ******************ANSWERS********************
        | Question | Time       | Space  |
        | -------- | ---------- | ------ |
        | Q1       | `O(n)`     | `O(1)` |
        | Q2       | `O(n²)`    | `O(1)` |
        | Q3       | `O(n)`     | `O(1)` |
        | Q4       | `O(log n)` | `O(1)` |
        | Q5       | `O(n²)`    | `O(1)` |
        | Q6       | `O(log n)` | `O(1)` |
        | Q7       | `O(n)`     | `O(n)` |
        | Q8       | `O(n²)`    | `O(1)` |

}
*/