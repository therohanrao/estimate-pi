from random import random as rand

def estimate_pi(num):
    
    x = 0
    y = 0
    points = list()
    for _ in range(num):
        x = rand()
        y = rand()
        points.append([x,y])
    
    num_in_circle = 0
    for coords in points:
        if (coords[0]**2 + coords[1]**2)**.5 < 1:
            num_in_circle += 1
    # ratio of points in circle and points in square
    # is approximately ratio of circle area to sqaure area
    # pi*r**2 / (2r)**2 ~ num_in_circle / len(points)
    # pi ~ 4*(num_in_circle/len(points))

    return 4*(num_in_circle/len(points))

def main():
    num = input("Enter a number: ")
    print("Pi is about:", estimate_pi(int(num)))


if __name__ == "__main__":
    main()