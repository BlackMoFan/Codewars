#include <iostream>
#include <string>
#include <sstream>

std::string createPhoneNumber(const int arr[10]){
  //your code here
  //my solution
  std::stringstream toReturn;

  toReturn << "(" << arr[0] << arr[1] << arr[2] << ") " << arr[3] << arr[4] << arr[5] << "-" << arr[6] << arr[7] << arr[8] << arr[9];
  return toReturn.str();
  
//  //best practice
//  char buf[15];
//  snprintf(buf, sizeof(buf), "(%d%d%d) %d%d%d-%d%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
//  return buf;
  
//  //clever
//  std::string res = "(...) ...-....";
//  for (unsigned is = 0, id = 0; is < res.length(); is++)
//    if (res[is] == '.')
//      res[is] = '0' + digits[id++];
//  return res;
  
}

int main(){
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; // hard-coded int array
  int arrFromUser[10]; // int array to be filled by user
  
  //ask user for 10-integer array and store to string variable
  std::cout << "Enter your 10-digit number: ";
  std::string numFromUser;
  std::cin >> numFromUser;
  
  //convert string to int array
  for(int i = 0; i < 10; i++){
  	arrFromUser[i] = numFromUser[i] - 48; // char - 48 will convert the ASCII character to its int representation
  }
  
  // function call for createPhoneNumber, returns a modified string
//  std::string returnedString = createPhoneNumber(arr);
  std::string returnedString = createPhoneNumber(arrFromUser);
  std::cout << returnedString << "\n";
  

  return 0;
}
