class whoLikesIt{
	public static String whoLikesIt(String... names){
		//Do your magic here
		//String toReturn = "";
		//if(names.length == 0){
		//	toReturn = "no one likes this";	
		//}else if(names.length == 1){
		//	toReturn = names[0] + " likes this";
		//}else if(names.length == 2){
		//	toReturn = names[0] + " and " + names[1] + " like this";
		//}else if(names.length == 3){
		//	toReturn = names[0] + ", " + names[1] + " and " + names[2] + " like this";
		//}else if(names.length == 4){
		//	toReturn = names[0] + ", " + names[1] + " and 2 others like this";
		//}else if(names.length > 4){
		//	toReturn = names[0] + ", " + names[1] + " and " + Integer.toString(names.length - 2) + " others like this";
		//}
		//return toReturn;
		
		//OR
		switch(names.length){
			case 0: return "no one likes this";
			case 1: return String.format("%s likes this", names[0]);
			case 2: return String.format("%s and %s like this", names[0], names[1]);
			case 3: return String.format("%s, %s and %s like this", names[0], names[1], names[2]);
			default: return String.format("%s, %s, and %d others like this", names[0], names[1], names.length -2);
		}
	}

	public static void main(String[] args){
		String[] names = {"Peter"};
		String returnedValue = whoLikesIt(names);
		System.out.println(returnedValue);
	}
}
