# Geometry

Dot product:
  The dot product of two vectors u and v is a real number determined by:
  
    u ⋅ v = |v||u|cos θ, 0 π ≤ θ ≤ 2 π, θ it's the angle between u e v.
    u . v = [u] X transpose([v]) 
  
  Properties 

  1) u ⋅ v = 0, if, and only if, one of them is null or θ = 90
  2) u ⋅ v ==  v ⋅ u
  3) u ⋅ u = |u|² 
  4) if m and n are real numbers: mu ⋅ nv = mn (u ⋅ v)
  5) (v + u) ⋅ w == (w ⋅ v) + (w ⋅ u)
  6) The dot product can tell us if the vector are at the same direction (u.v > 0)
  
Cross product:
  The cross product of two vectors u and v it's a vector determined by :
  
    w = u x v = |u||v|sin θ, 0 π ≤ θ ≤ 2 π, θ it's the angle between u e v.
    
    w = u x v = determinant([ [i,  j,   k],
                              [u1, u2, u3],
                              [v1, v2, v3] ])
  
  Properties
 
  1) The vector w is normal to both v and u (and the plain that contains them)
  2) The absolute value of w can tell us the relative position of these vectors (clockwise if w > 0)
  3) The absolut value of w is also the is equal to the area of the parallelogram with two of its sides formed by A and B.
  4) u x v = 0, if, and only if, one of them is null or θ = 0 
  2) u x v = - (v x u)
  3) mv x nu = (mn) (v x u), if  m and  n are real numbers
  4) Distributive
  5) u = (x1, y1) and v = (x2, y2), u x v = x1*y2 - y1*x2
  
  
