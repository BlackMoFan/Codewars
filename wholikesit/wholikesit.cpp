#include <iostream>
#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
    std::string toReturn; //declaration of string variable to return
    if(names.size() == 0){ //if the vector is empty, return this value of toReturn
      toReturn = "no one likes this";
    }else if(names.size() == 1){ //if the vector is equal to 1, return this value of toReturn
      toReturn = names[0] + " likes this";
    }else if(names.size() == 2){ //if the vector is equal to 2, return this value of toReturn
      toReturn = names[0] + " and " + names[1] + " like this";
    }else if(names.size() == 3){ //if the vector is equal to 3, return this value of toReturn
      toReturn = names[0] + ", " + names[1] + " and " + names[2] + " like this";
    }else if(names.size() == 4){ //if the vector is equal to 4, return this value of toReturn
      toReturn = names[0] + ", " + names[1] + " and 2 others like this";
    }else if(names.size() > 4){ //if the vector is greater than 4, return this value of toReturn
      toReturn = names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2 ) + " others like this";
    }else{ //not likely to be returned
      toReturn = "Default return value.";
    }
    return toReturn; // Do your magic!
}

int main(){
	std::vector<std::string> names {"Peter"};
	
	std::string returnedString = likes(names);
	std::cout << returnedString << std::endl;
	
	return 0;
}
