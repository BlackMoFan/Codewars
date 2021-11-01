#include <iostream>
#include <string>

std::string spinWords(const std::string &str)
{
  std::string toRet;
  int numberOfWords = 1;
  for(std::string::size_type i = 0; i < str.length(); i++){
    if(str[i] == ' '){
      numberOfWords++;
    }
  }
   
  int afterPreviousSpace = 0;
  for(int i = 0; i < numberOfWords; i++){

    //if word is the last word
    if(i == numberOfWords - 1){
      std::string subStr = str.substr(afterPreviousSpace, str.length());
      if(subStr.length() < 5){
        toRet.append(subStr);
        //std::cout << subStr << " ";
      }
      else{
        for(int j = subStr.length() - 1; j >= 0; j--){
          //std::cout << subStr[j];
          //toRet.push_back(subStr[j]);
          toRet.append(1, subStr[j]);
        }
        //std::cout << " ";
        //toRet.append(" ");
      } 
      return toRet;
    }
    
    //if word/s is not the last word
    int spaceLocate = str.find(' ', afterPreviousSpace); //length of the word

    std::string subStr = str.substr(afterPreviousSpace,spaceLocate - afterPreviousSpace);
    if(subStr.length() < 5){
      //cout the uninverted word
      //std::cout << subStr << " ";
      toRet.append(subStr + " ");
    }
    //cout the inverted word 
    else{
      for(int j = subStr.length() - 1; j >= 0; j--){
        //std::cout << subStr[j];
        toRet.append(1, subStr[j]);
      }
      //std::cout << " ";
      toRet.append(" ");
    }
    //reassign value of index of first letter to index of space + 1
    afterPreviousSpace = spaceLocate + 1;
  }
  return toRet;
}// spinWords

int main(){
	std::string returnedValue = spinWords("Burgers are my favorite fruit");
	std::cout << returnedValue << std::endl;
	return 0;
}
