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
        if(avgScores >= 55 && avgScores <70){
            return 'P';
        }
        if (avgScores >=40 && avgScores <55){
            return 'D';
        }
        return 'T';
    }
};
