#include <bits/stdc++.h>

using namespace std;

bool isReady() {
    string name,gender,Respond;
    int age;
    cout<<"***................Welcome to Quiz Game................***"<<endl<< endl << endl;
    cout<<"What's your name?"<<endl;
    cin>>name;
    cout<<"Hello! "<<name<<"."<<endl;
    cout<<"How old are you?"<<endl;
    cin>>age;
    cout<<"Go Ahead :)"<<endl;
    cout<<endl;
    cout<<"Rules:"<<endl;
    cout<<"1.You can't use internet or ask someone to find the answer. use your brain."<<endl;
    cout<<"2.You will be given 3 options and you have to press a, b ,c for the right option."<<endl;
    cout<<"You can choose only one option at a time."<<endl;
    cout<<"3.Total 20 question. Each question have 5 mark."<<endl;
    cout << endl;
    cout<<"Are you ready for quiz? yes/no" << endl;
    cin >> Respond;
    if (Respond == "yes") {
        cout << endl;
        cout <<"Questions are waiting for you. Good luck."<<endl;
        cout << endl;
        return 1;
    } else {
        cout << "Okay. Good Bye!" << endl;

        return 0;
    }

}

class Questions {
  public:

    string qustion;
    string option1;
    string option2;
    string option3;
    string correct_ans;
};

int main() {

    if(isReady()==0) return 0;

    string Ans;
    ifstream inFile;
    inFile.open("data.txt");

    Questions Q[30];

    if(inFile.fail()) {
        cout<<"Data file not found";
        return 0;
    }

    int n;
    inFile >> n;

    getline(inFile, Q[0].qustion);

    for(int i=0; i<n; i++) {
        getline(inFile, Q[i].qustion);
        getline(inFile, Q[i].option1);
        getline(inFile, Q[i].option2);
        getline(inFile, Q[i].option3);
        getline(inFile, Q[i].correct_ans);
    }

    int score=0;

    bool isUniqe[n+1];

    memset(isUniqe,0,sizeof(isUniqe));

    for(int i=0; i<n; i++) {
        int r;

        while(true) {
            r =  (rand() % n);  // 0 to n er majhe random value

            if(isUniqe[r]==0) {
                isUniqe[r]=1;
                break;
            }
        }

        cout<<Q[r].qustion<<endl;
        cout<<Q[r].option1<<endl;
        cout<<Q[r].option2<<endl;
        cout<<Q[r].option3<<endl;
        cout<<"Type your answer: "<<endl;
        cin>>Ans;
        //cout << endl;

        if (!Q[r].correct_ans.compare(Ans)) {
            score = score+5;

            cout << "Correct Answer\n Score: "<< score<<endl;
            cout << endl;
        } else {
            cout<<"Wrong Answer."<<endl;
            cout<<"correct answer: "<<Q[r].correct_ans<<endl;
            cout<<"score" << score<< endl<< endl;
        }

    }

    if(score>=80) {
        cout<<" \t You are extremely intelligent."<<endl;
    }
    if(score>=70 && score<80) {
        cout<<" \t You are intelligent."<<endl;
    }
    if(score>=50 && score<70) {

        cout<<" \t You are average Your Score is "<<score;
    } else if(score<=40)
        cout<<"Try again. Better luck next time";
}



