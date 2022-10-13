import turtle,math
def F(x,y):a.goto(-x,y),b.goto(x,y)
a,b,c,s,s2=turtle.Turtle(),turtle.Turtle(),turtle.Screen(),90,95
c.setup(20*s,10*s,0,0),turtle.tracer(9),a.ht(),b.ht(),c.bgcolor("black"),a.color("yellow"),b.color("yellow"),b.begin_fill(),a.begin_fill()
for x in range(-3*s2,3*s2+1):F(-7*s2*math.sqrt(1-(x/(3*s2))**2),x)
b.end_fill(),a.end_fill(),F(0,-3*s),a.begin_fill(),b.begin_fill(),a.color("white"),b.color("black")
for x in range(1,4*s):F(x,s*(x/(2*s)-0.0913722*(x/s)**2-3+math.sqrt(1-(math.fabs(x/s-2)-1)**2)))
for x in range(4*s,7*s):F(x,-3*math.sqrt(s**2-(x/7)**2))
for x in range(7*s,3*s,-1):F(x,3*math.sqrt(s**2-(x/7)**2))
for x in range(3*s,s,-1):F(x,4.21052*s-x/2-1.3*math.sqrt(4*s*s-(x-s)**2))
F(s+1,3*s),F(s/2,2.2*s),F(-1,2.2*s),a.end_fill(),b.end_fill(),F(0,0),turtle.exitonclick()
