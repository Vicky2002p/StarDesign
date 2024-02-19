
# Function of left triangle
def leftTraingle(height):
    for num in range(height+1):
        print("* "*num)


# Function for upside down left triangle
def downLeftTriangle(height):
    for num in range(height, 0, -1):
        print("* "*num)


# Function for right triangle
def rightTriangle(height):
    for num in range(height):
        print(" "*(height-num)+"*"*(num+1))


# Function for upside down right triangle
def downRightTriangle(height):
    for num in range(height):
        print(" "*num, "*"*(height - num))


# Function for pyramid
def pyramid(height):
    for num in range(1 ,height+1):
        print(" "*(height-num), "* "*num)


# Function for upside down pyramid
def downPyramid(height):
    for num in range(height, 0, -1):
        print(" "*(height- num), "* "*num)


# Function for diamond
def diamond(height):
    for num in range(height):
        print(" "* (height-num), "* "*num)
    for num in range(height, 0, -1):
        print(" "* (height-num), "* "*num)


# Function for square
def square(length):
    for num in range(length):
        print("* "*length)


# Function for hollow rectangle
def holloRectangle(length):
    for num in range(length):
        if num == 0 or num == length-1:
            print("* "*length)
        else:
            print("* ", " "*(length-2), " *")


# Function for rhombus
def rhombus(height):
    for num in range(height):
        print(" "*num, "* "*height)
    print()
    for num in range(height,0, -1):
        print(" "*num, "* "*height)

# Function for upside down triangle on a traingle
def oneTriOnAnother(height):
    for num in range(height, 0, -1):
        print(" "*(height-num), "* "*num)
    for num in range(1, height):
        print(" "*(height-num-1), "* "*(num+1))



leftTraingle(6)
print()
downLeftTriangle(6)
print()
rightTriangle(6)
print()
downRightTriangle(6)
print()
pyramid(6)
print()
downPyramid(6)
print()
diamond(5)
print()
square(5)
print()
holloRectangle(5)
print()
rhombus(5)
print()
oneTriOnAnother(5)
print()
        