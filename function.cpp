#include "function.h"
#include "queue.h"
#include "stack.h"
#include <iostream>
#include <fstream>
#include <string>

void outputFile(Queue &q){ //Used to save our output in a new file
	std::string renameFile;
	
	std::cout << "Hello user, we are now in the process of saving our "
	<< "output into a new file. What would you like to name our file?"
	<< std::endl;
	std::cout << "Please enter name: ";
	std::cin >> renameFile;			// let the user to name the file
	std::ofstream out (renameFile);
	std::cout<<q.top();
	while(q.size() > 0){	// loops through the queue 
		out << q.top()<<std::endl; //and saves it to new file
        q.pop();
	}
	out.close();
}


void readAndReverse( Queue &q){
    std::string file_name;  // for user to enter text file name
    std::ifstream astream;  // using ifstream to access the text file called astream
    std::string word;

    // "Yes!" begin the program by asking to write file name
    std::cout << "Please enter the text file of your choice." << std::endl;
    std::cout << "Input file name: ";
    std::cin >> file_name;
                
    // opens the desired text file according to user's input
    astream.open(file_name);

    // checks if astream opened an actual file, maybe misspelling file name
    if(astream.is_open()){
    //to place all of the original text to the linked list
        while(std::getline(astream,word)){
			
			int sizeA = word.length()-2;              
            if(std::isupper(word[sizeA])){ //checks if last character in
                Stack s;					//line is capitalized
                std::string result;
                for(int i = 0; i <= sizeA; i++){
                    s.push(word[i]);	//stack push characters
                }
                 
                while(s.size() > 0){
                    result+= s.top();	//combine characters to make words
                    s.pop();			//pop from top of list
                }
             
                q.push(result);			//push the resulted words to queue
                s.removeAll();			//clear the stack to free space
            }
            else{			//this will push the correct words to the
							//queue if it is not reversed
                q.push(word);
 
            }
                        
                        // extracts the words from the text file and puts them in the vector
            }
         // closes the desired text file
         std::cout<<"closed";
        astream.close();
        
         }
                // ends program if no file was opened
        else{
            std::cout << "There exists no file: " << file_name << std::endl;
            return;
        }
}


void printQueue(Queue q)//Used for printing out the data.
{
    
    while(q.size() > 0) { //set to while there is a next node from the top

        std::cout << q.top()<<std::endl; //prints out the words in 
        q.pop();						//FIFO order
    }
}

void readAndReverse2( Queue &q){
    std::string file_name;  // for user to enter text file name
    std::ifstream astream;  // using ifstream to access the text file called astream
    std::string word;

    // "Yes!" begin the program by asking to write file name
    std::cout << "Please enter the text file of your choice." << std::endl;
    std::cout << "Input file name: ";
    std::cin >> file_name;
                
    // opens the desired text file according to user's input
    astream.open(file_name);

    // checks if astream opened an actual file, maybe misspelling file name
    if(astream.is_open()){
    //to place all of the original text to the linked list
        while(std::getline(astream,word)){
			std::string res;
			int i;    
			for (i=0;i<word.size();i++){ 
				res+=word[i];		// character by character
				if((std::isupper(word[i]) and std::isupper(word[i+2]))or (std::isupper(word[i]) and word[i+2]=='.')){ 
					Stack s;				
					std::string result;
					for(int i = 0; i <res.size(); i++){
						s.push(res[i]);	//stack push characters
					}
					res="";
					while(s.size() > 0){
						result+= s.top();	//combine characters to make words
						s.pop();			//pop from top of list
					}
             
					q.push(result);			//push the resulted words to queue
					s.removeAll();			//clear the stack to free space
				}
				else if((word[i]=='.' and word[i+2]=='.') or (std::isupper(word[i+2]) and word[i]=='.')) {			//this will push the correct words to the
							//queue if it is not reversed
					q.push(res);
					res="";
 
				}
			}
                        
                        // extracts the words from the text file and puts them in the vector
       }
         // closes the desired text file
         std::cout<<"closed";
        astream.close();
        
     }
                // ends program if no file was opened
      else{
           std::cout << "There exists no file: " << file_name << std::endl;
           return;
      }
}


