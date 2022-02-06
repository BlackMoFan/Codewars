#include <iostream>
//#include <ctime>
#include <chrono>
#include <iomanip>

class binarySearch {
  public: 
    //constructor method
    binarySearch(int List[], int s, int l, int r,int t){
      size = s;
      
      //allocate size-number of int memory to theList pointer
      theList = (int*) malloc(size * sizeof(int));

      //copy the content of List[] to theList[]
      for(int i = 0; i < size; i++){
        theList[i] = List[i];
      }

      left = l;
      right = r;
      target = t;
      
      //print array content
      printArray();
      
      //print out the target
      std::cout << "Target: " << target << "\n";
      
      //time_t start, end; // using time() function

      //get start time //using time() function
      //time(&start); //using time() function

      //high precision runtime measure from https://bit.ly/3uv1Ezv
      auto start = std::chrono::high_resolution_clock::now(); //using chrono

      // unsync the I/O of C++
      std::ios_base::sync_with_stdio(false); //using chrono


      //run search method here then print
      int index = search();
      index == -1 ? std::cout << "Target was not found in the array\n" : std::cout << "Target is at index " << index << "\n";

      auto end = std::chrono::high_resolution_clock::now(); //using chrono

      double time_taken = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
      time_taken *= 1e-9;

      //get end time //using time() function
      //time(&end); //using time() function

      //printf("Running time is %f\n", difftime(end, start)); //using time() function
      std::cout << "Running time is: " << std::fixed << time_taken << std::setprecision(9) << " sec.\n";
    }

    //method to print the array content
    void printArray(){
      std::cout << "Array content: ";
      for(int i = 0; i < size; i++){
        std::cout << theList[i] << ", ";
      }
      std::cout << "\n";
    }

    //iterative search
    int search(){
      while(left <= right){
        int mid = (left + right) / 2;

        //if target is at the middle
        if(theList[mid] == target) return mid;

        //if target is smaller than mid, then it could be in left subarray
        else if(theList[mid] < target){
          left = mid + 1;
        }
        //if target is larger than mid, then it could be in right subarray
        else{
          right = mid - 1;
        }
      }
      //if target does not exist in the array
      return -1;
    }

  private:
    int size;
    int target;
    int left;
    int right;
    int* theList; //pointer variable to be used as array
};

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  
  int length = sizeof(arr)/sizeof(arr[0]);
  
  //this one should return index 5
  binarySearch firstCase(arr, length, 0, length - 1, 6);

  std::cout << "\n";

  //this one should say that the target was not found
  binarySearch secondCase(arr, length, 0, length - 1, 23);

  return 0;
}
