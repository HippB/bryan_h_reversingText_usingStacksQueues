/* Bryan Hui 10-29-2021
CS124Fall2021 - Lab3ReverseText
This program asks the user to use two text files that has some lines that are reversed,
Using this program with those text files will print out the corrected revisions of the text file where
there are no reversed sentences. This will make use of the single linked list, stacks and queues in order
to output the lines in the text file. Doing so will allow the user then save the corrected text in a new
output file with a new of their choosing.
*/

#include <iostream>
#include "function.h"
#include "stack.h"
#include "queue.h"
#include <fstream>
#include <string>

// g++ *.cpp -o anything
// valgrind ./anything
//g++ -g *.cpp -o anything

//

int main(){
    
    int userInput, userInput2;
	

    //Node* first = nullptr; // initialize hp
    //Node* tp = nullptr; // initialize tp
    do{
        std::cout << "Type 1 to start the program! and 2 to exit!" << std::endl;
        std::cout << "Welcome user, in this program we will check and correct reversed sentences" << std::endl;
        std::cin >> userInput;
        switch(userInput){
            case 1:
				std::cout<<"Type 1 if you want to reverse a poem. And 2 if you want to reverse a Paragraph";
				std::cin>>userInput2;
				if (userInput2==1){	
					Queue q1;
					readAndReverse(q1);
					std::cout << std::endl;
					printQueue(q1);
					//q.removeAll();  //deletes list,clear memory
					//outputFile(q);
				}
				else if (userInput2==2){						
					Queue q2;
					readAndReverse2(q2);
					std::cout << std::endl;
					printQueue(q2);
					//q.removeAll();  //deletes list,clear memory
					//outputFile(q);						break;
				}
				else{	
					std::cout << "You have entered an invalid response. Please try again." << std::endl;
				}
				//outputFile(q);		//save output file 
				break;			
            // if user enters 2, ends program
            case 2:
                std::cout << "Exiting Program." << std::endl;
                return 0;
                break;
            // if user enters neither 1 nor 2, input again
            default:
                std::cout << "You have entered an invalid response. Please try again." << std::endl;
                break; 
       }    
    }while(userInput != 2); // condition: exit program if user inputs 2

}

