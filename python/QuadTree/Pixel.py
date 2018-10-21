from QuadTree.Point import Point

class Pixel(object):
	def __init__(self, color = [0, 0, 0],
			topLeft = Point(0, 0),
			bottomRight = Point(0, 0)):
		self.R = color[0]
		self.G = color[1]
		self.B = color[2]
		self.topLeft = topLeft
		self.bottomRight = bottomRight
