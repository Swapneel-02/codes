import turtle
import random

# number of side
sides=3
  
# size
n = 20
  
# creating instance of turtle 
pen = turtle.Turtle()
pen.pensize(width=5)

#list to store different colors
color_list=['red','brown','green','yellow','violet','blue']

# loop to draw a side 
for i in range(n*sides): 
    
    # drawing side of 
    # length i*10 
    pen.forward(i*10)
    pen.color(random.choice(color_list)) 
      
    # changing direction of pen 
    # by 360/sides degree in clockwise 
    pen.right(360 / sides)
      
# closing the instance 
turtle.done()