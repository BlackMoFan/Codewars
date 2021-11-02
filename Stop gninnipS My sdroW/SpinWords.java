public class SpinWords {
  public static String spinWords(String sentence){
    String toRet = new String();
    int numberOfWords = 1;
    for(int i = 0; i < sentence.length(); i++){
      if(sentence.charAt(i) == ' '){
        numberOfWords++;
      }
    }
    
    int afterPreviousSpace = 0;
    for(int i = 0; i < numberOfWords; i++){
      //if word is the last word
      if(i == numberOfWords - 1){
        String subStr = sentence.substring(afterPreviousSpace, sentence.length());
        if(subStr.length() < 5){
          toRet = toRet.concat(subStr);
        }
        else{
          String temp = new String();
          for(int j = 0; j < subStr.length(); j++){
            char ch = subStr.charAt(j);
            temp = ch + temp;
            //toRet += subStr.charAt(j);
          }
          toRet = toRet.concat(temp);
        }
        return toRet;
      } 

      int spaceLocate = sentence.indexOf(' ',afterPreviousSpace);
      String subStr = sentence.substring(afterPreviousSpace, spaceLocate);
      if(subStr.length() < 5){
        toRet = toRet.concat(subStr);
        toRet += ' ';
      }
      else{
        String temp = new String();
        for(int j = 0; j < subStr.length(); j++){
          char ch = subStr.charAt(j);
          temp = ch + temp;
          //toRet += subStr.charAt(j);
        }
        toRet = toRet.concat(temp);
        toRet += ' ';
      }
      afterPreviousSpace = spaceLocate + 1; 
    }
    return toRet;
  }
  public static void main(String[] args){
    String word = spinWords("Hey fellow warriors");
    System.out.println(word);
  }
}
