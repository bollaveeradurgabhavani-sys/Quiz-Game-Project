#include <iostream>
#include <vector>
using namespace std;

// Structure for Question
struct Question {
    string question;
    string option1, option2, option3, option4;
    char correct;
};

// Function to run quiz
void runQuiz(vector<Question> &quiz) {
    int score = 0;
    char answer;

    for (int i = 0; i < quiz.size(); i++) {
        cout << "\nQ" << i + 1 << ": " << quiz[i].question << endl;
        cout << "A. " << quiz[i].option1 << endl;
        cout << "B. " << quiz[i].option2 << endl;
        cout << "C. " << quiz[i].option3 << endl;
        cout << "D. " << quiz[i].option4 << endl;

        cout << "Enter your answer (A/B/C/D): ";
        cin >> answer;

        if (toupper(answer) == quiz[i].correct) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! Correct answer is " << quiz[i].correct << endl;
        }
    }

    cout << "\n?? Quiz Finished!\n";
    cout << "Your Score: " << score << "/" << quiz.size() << endl;
}

int main() {
    vector<Question> quiz = {
        {"What is the capital of India?", "Mumbai", "Delhi", "Chennai", "Kolkata", 'B'},
        {"Which language is used for C++?", "Python", "C++", "Java", "HTML", 'B'},
        {"2 + 2 = ?", "3", "4", "5", "6", 'B'},
        {"Which is a programming language?", "Car", "Tree", "C++", "House", 'C'},
        {"Who is known as father of C++?", "Dennis Ritchie", "Bjarne Stroustrup", "James Gosling", "Elon Musk", 'B'}
    };

    runQuiz(quiz);

    return 0;
}
