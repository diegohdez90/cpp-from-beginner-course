#include <iostream>
#include <vector>

using namespace std;

int main() {
    char vowels [] {'a', 'e', 'i', 'o', 'u'};

    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] <<  endl;

    double hi_temps [] {90.4, 97.1, 88.6, 94.2, 89.5};

    cout << "The first high temperature: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.3;

    cout << "The new high temperature is: " << hi_temps[0] << endl;

    int test_scores [5] {88, 94, 85, 90, 92};

    cout << "First score result: " << test_scores[0] << endl;
    cout << "Second score result: " << test_scores[1] << endl;
    cout << "Third score result: " << test_scores[2] << endl;
    cout << "Fourth score result: " << test_scores[3] << endl;
    cout << "Fifth score result: " << test_scores[4] << endl;

    // cout << "Enter five scores: ";
    // cin >> test_scores[0];
    // cin >> test_scores[1];
    // cin >> test_scores[2];
    // cin >> test_scores[3];
    // cin >> test_scores[4];

    cout << "Your score values: " << test_scores << endl;

    vector <char> vowels_vector {'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels_vector[0] << endl;
    cout << "The last vowel is: " << vowels_vector[4] <<  endl;

    vector <int> test_scores_vector {77, 87, 81};

    cout << "First score result: " << test_scores_vector[0] << endl;
    cout << "Second score result: " << test_scores_vector[1] << endl;
    cout << "Third score result: " << test_scores_vector[2] << endl;

    cout << "There are " << test_scores_vector.size() << " scores in the vector" << endl;

    cout << "Update three scores: ";

    cin >> test_scores_vector[0];
    cin >> test_scores_vector[1];
    cin >> test_scores_vector[2];
    
    cout << "First score result: " << test_scores_vector[0] << endl;
    cout << "Second score result: " << test_scores_vector[1] << endl;
    cout << "Third score result: " << test_scores_vector[2] << endl;

    cout << "Enter a score to add to the vector: ";
    int score_to_add {0};
    cin >> score_to_add;

    test_scores_vector.push_back(score_to_add);

    cout << "Enter a score to add to the vector: ";
    cin >> score_to_add;

    test_scores_vector.push_back(score_to_add);
    cout << "The new vectors are now:" << endl;

    cout << "First score result: " << test_scores_vector[0] << endl;
    cout << "Second score result: " << test_scores_vector[1] << endl;
    cout << "Third score result: " << test_scores_vector[2] << endl;
    cout << "Fourth score result: " << test_scores_vector[3] << endl;
    cout << "Fifth score result: " << test_scores_vector[4] << endl;

    return 0;
}