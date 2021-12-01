class linearSearch:
  def __init__(self, theList, target):
    self.theList = theList
    self.startPoint = 0
    self.endPoint = len(theList) - 1
    self.targetValue = target

    #run
    self.evaluate()

  def search(self):
    while self.startPoint <= self.endPoint:
      midPoint = (self.startPoint + self.endPoint) // 2

      if theList[midPoint] == self.targetValue:
        return midPoint
      elif theList[midPoint] > self.targetValue:
        self.endPoint = midPoint - 1
      else:
        self.startPoint = midPoint + 1

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
