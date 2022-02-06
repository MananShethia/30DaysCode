h = int(input())
m = int(input())

# hour hand move / hour = 360 / 12 = 30
# hour hand move / minute = 360 / 12 / 60 = 0.5

angle = abs((h * 30 + m * 0.5) - (m * 6))
print(int(min(360-angle, angle)))
