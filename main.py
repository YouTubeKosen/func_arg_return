u0, l0, h0 = 1, 2, 3
u1, l1, h1 = 4, 5, 6
u2, l2, h2 = 7, 8, 9

S = (u0+l0)*h0/2 + \
    (u1+l1)*h1/2 + \
    (u2+l2)*h2/2
print(S)

def get_trapezoid_area(upper, lower, height):
    return (upper + lower) * height / 2

S = get_trapezoid_area(u0, l0, h0) + \
    get_trapezoid_area(u1, l1, h1) + \
    get_trapezoid_area(u2, l2, h2)

print(S)