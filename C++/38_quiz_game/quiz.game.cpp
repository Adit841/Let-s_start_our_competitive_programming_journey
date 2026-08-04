#include<iostream>
using namespace std;

int main(){
    string questions[] = {"1. What is your name?: ",
                           "2. How are you?: ",
                            "3. What are you doing?: ",
                            "4. Do you love me?: "  };
    
    string options[][4] = {{"A. Andy", "B. Mandy", "C. Sinndy", "D. Aditya"},
                           {"A. Fine", "B. Not fine", "C. wow", "D. now"},
                           {"A. Nothing", "B. something", "C. anything", "D. fonnithing"},
                           {"A. Yes", "B. No", "C. Why", "D. How"}};
    
    char answers[] = {'D','A','B','C'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        cout <<"************************************\n";
        cout << questions[i] <<'\n';
        cout <<"************************************\n";

        for(int j =0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answers[i]){
            cout <<"CORRECT \n";
            score++;
        }else{
            cout <<"WRONG\n";
            cout << "Answer: " << answers[i] <<'\n';
        }
    }
        cout <<"************************************\n";
        cout << "RESULTS\n";
        cout <<"************************************\n";
        cout <<"CORRECT GUESSES: "<< score <<'\n';
        cout << "# of QUESTIONS: " << size<<'\n';
        cout << "SCORE: "<< (score/(double)size)*100 <<" %" << '\n';
    return 0;
}