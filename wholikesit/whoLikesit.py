def likes(names):
    if(len(names) == 0):
        print("no one likes this")
    elif(len(names) == 1):
        print("{} likes this".format(names[0]))
    elif(len(names) == 2):
        print("{} and {} like this".format(names[0],names[1]))
    elif(len(names) == 3):
        print("{}, {} and {} like this".format(names[0],names[1],names[2]))
    else:
        print("{}, {} and {} others like this".format(names[0],names[1],len(names)-2))

likes(["Alex","Jacob","Mark","Max"])
