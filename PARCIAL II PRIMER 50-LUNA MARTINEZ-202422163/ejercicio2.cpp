#include <iostream>
using namespace std;

bool isCorrect (char userAnswer,char correctAnswer) {
    if (userAnswer == correctAnswer) {
        return true;
    } else {
        return false;
    }
}

int questionScore (bool correct) {
    if (correct) {
        return 10;
    } else {
        return 0;
    }
}

void playQuiz () {
    bool firstAnswer = isCorrect('a', 'a');
    int firstScore = questionScore(firstAnswer);
    bool secondAnswer = isCorrect ('b', 'b')
    int secondtScore = questionScore(secondAnswer);
    bool thirdtAnswer = isCorrect('c', 'c');
    int thridScore = questionScore(thirdtAnswer);

}

int main () {
    playQuiz ();
    return 0;
}