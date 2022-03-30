//File:        clab14a.cc
  2 //Author:
  3 //Purpose:     This program reads data for a computer science
  4 //             closed lab section.
  5 //Input:       Input for this program is from the external data
  6 //             file labscores.dat.  The first two entries in the file
  7 //             are the number of students in the class and the number
  8 //             of closed labs the class has finished.
  9 // 
 10 //             For each student, their closed labs are input from the
 11 //             following lines of the file.   
 12 //
 13 //Limitations: It is assumed that there will be no more than
 14 //             MAX_STUDENTS students in the class and there will be
 15 //             no more than MAX_LABS labs.
 16 
 17 //include files...
 18 #include <iostream>
 19 #include <fstream>
 20 
 21 using namespace std;
 22 
 23 //global constants...
 24 const int MAX_STUDENTS=40;          //maximum number of students
 25 const int MAX_LABS=14;              //maximum number of closed labs
 26 
 27 //function prototypes...
 28 //function to read labs from the data file
 29 void ReadScores(int labScores[][MAX_LABS], int& numStudents,
 30                 int& numLabs, ifstream& myin);
 31 
 32 //your function prototypes should go here!!!
 33 
 34 int main()
 35 {
 36    //local declarations...
 37    int numStudents;                          //how many students are in the class
 38    int numLabs;                              //how many closed labs
 39    ifstream myin;                            //input file stream
 40    int labScores[MAX_STUDENTS][MAX_LABS];    //holds lab scores
 41 
 42    myin.open ("labscores.dat");              //open the file for input
 43    if (!myin)
 44    {
 45        cout << "Could not open labscores.dat\n";
 46        return 1;
 47    }
 48 
 49    //read in the data for all students in the class
 50    ReadScores(labScores, numStudents, numLabs, myin);
 51 
 52    //print the data for all students in the class
 53    //your print function should be called here!!!!!
 54 
 55 
 56    //find each student's lab average -- use the StudentAvg()
 57    //function here.
 58 
 59 
 60    //find and print the average score made on each individual lab
 61    //use your LabAvg() function here
 62  
 63 
 64    //end of main...
 65    return 0;
 66 }
 67 
 68 //Function:    ReadScores()
 69 //Purpose:     This function reads data for students in a closed
 70 //             lab class.  Data is read from the input file stream
 71 //             myin.  The number of students in the lab and the
 72 //             number of closed labs finished by each student are read
 73 //             first.  Next, for each student, their closed labs
 74 //             are read into the two-d array labscores.
 75 //Assumption:  MAX_LABS is a global constant which has been defined
 76 //             previously.
 77 
 78 void ReadScores(int labScores[][MAX_LABS],  //OUT: Holds the lab scores
 79                 int& numStudents,           //OUT:  # of students
 80                 int& numLabs,               //OUT: Number of Labs
 81                 ifstream& myin)             //IN: Input file stream 
 82          
 83 {
 84    //local declarations...
 85    int student;                            //controls which student's labs are read
 86    int lab;                                //controls which lab is being read
 87 
 88    //get the number of students in the class
 89    myin >> numStudents >> numLabs;
 90 
 91    //outer loop controls which student(row) is being read
 92    for (student = 0; student < numStudents; student++)
 93    {
 94       //inner loop controls which lab(column) is being read
 95       for (lab = 0; lab < numLabs; lab++)
 96          myin >> labScores[student][lab];
 97    }
 98    return;
 99 }
100 
101 //Place the definition of your function to print the scores here
102 
103 
104 //Place the definition of the StudentAvg() function here
105 
106 
107 //Place the definition of the LabAvg() function here