#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id){
            this->testScores = scores;
        }
    char calculate(){
        int sumScores = 0;
        
        for(int i = 0; i<testScores.size(); i++){
            sumScores += testScores[i];
        }
        int avgScores;
        
        avgScores = sumScores/testScores.size();
        
        if(avgScores >= 90 && avgScores <= 100)    {
            return 'O';
        }
        if(avgScores >=80 && avgScores < 90){
            return 'E';
        }
        if(avgScores >= 70 && avgScores <80){
            return 'A';
        }
        if(avgScores >= 60 && avgScores <70){
            return 'P';
        }
        if (avgScores >=55 && avgScores <60){
            return 'D';
        }
        return 'T';
    };
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
