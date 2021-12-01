class linearSearch:
  def __init__(self, theList, target):
    self.theList = theList
    self.targetValue = target

    #run
    self.evaluate()

  def search(self):
    startPoint = 0
    endPoint = len(self.theList) - 1
    
    while startPoint <= endPoint:
      midPoint = (startPoint + endPoint) // 2

      if theList[midPoint] == self.targetValue:
        return midPoint
      elif theList[midPoint] > self.targetValue:
        endPoint = midPoint - 1
      else:
        startPoint = midPoint + 1

    return None

  def evaluate(self):
    point = self.search()

    if point is not None:
      print("Target found at index: ", point)
    else:
      print("Target not found")

theList = [x for x in range(1,22)]

search = linearSearch(theList, 11)
#search.evaluate()

search = linearSearch(theList, 5)
#search.evaluate()

search = linearSearch(theList, 23)
#search.evaluate()
