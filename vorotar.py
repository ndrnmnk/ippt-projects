class vorotar:
	def __init__(self, name, age, height, weight, arm_len):
		self.name = name
		self.age = age
		self.height = height
		self.weight = weight
		self.arm_length = arm_len


test = vorotar("Test", "6", "218", "13", "2")
print(test.name + " is " + test.age + " years old, weights " + test.weight + " kg. I`m too lazy to continue")
